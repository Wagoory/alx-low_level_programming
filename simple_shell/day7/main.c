#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

void execute(char *args[])
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("Exec failed");
			exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0)
	{
		perror("Fork failed");
	}
	else
	{
		do
		{
			waitpid(pid, &status, WUNTRACED);
		}
		while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}

int main()
{
	char *input = NULL;

	size_t input_size = 0;
	ssize_t bytes_read;
	char *token = strtok(input, " ");
	char *args[MAX_INPUT_SIZE / 2 + 1];
	int i = 0;

	while (1)
	{
		printf("SimpleShell> ");
		bytes_read = getline(&input, &input_size, stdin);

		if (bytes_read == -1)
		{
			perror("Error reading input");
			break;
		}

		if (input[bytes_read - 1] == '\n')
		{
			input[bytes_read - 1] = '\0';
		}

		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}

		args[i] = NULL;

		if (i > 0)
		{
			if (strcmp(args[0], "exit") == 0)
			{
				printf("Exiting the shell.\n");
				break;
			}

			execute(args);
		}
	}

	free(input);

	return 0;
}
