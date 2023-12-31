#include "main.h"

int main(int argc, char **argv)
{
	char *main_command;
	char **args;

	(void)argc;
	(void)argv;
	while (1)
	{
		main_command = get_line();

		if (!main_command || main_command == NULL)
		{
			free(main_command);
			return (-1);
		}
		args = token(main_command);

		if (!args)
		{
			freearr(args);
			return (-1);
		}

		execute(args);
	}

	return (0);
}
