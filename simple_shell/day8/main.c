#include "main.h"

int main(void)
{
	char *line = NULL;
	char **tokens = NULL;
	int status = 0;
	char *full_path;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		line = read_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 2);
			return (status);
		}
		tokens = spilt_line(line);
		
		full_path = get_path(tokens[0]);
		if (full_path == NULL)
		{
			perror(tokens[0]);
			return (127);
		}
		/*tokens[0] = malloc(strlen(full_path) + 1);

		strcpy(tokens[0], full_path);*/

		/*full_path(tokens);*/

		status = exec(tokens, full_path);

		free(tokens);
		free(line);
		free(full_path);
	}

	return (status);
}
