#include "main.h"

int main(void)
{
	char *line = NULL;
	char **tokens = NULL;
	int status = 0;
	char *path, *full_path;

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
		
		path = strdup(tokens[0]);
		full_path = get_path(path);
		tokens[0] = path;

		status = exec(tokens);

		free(tokens);
		free(line);
	}

	return (status);
}
