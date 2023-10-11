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
		free(tokens[0]);
		tokens[0] = malloc((full_path) * sizeof(char));

		strcpy(tokens[0], full_path);

		status = exec(tokens);

		free(tokens);
		free(full_path);
		free(line);
	}

	return (status);
}
