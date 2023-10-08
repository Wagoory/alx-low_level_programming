#include "main.h"

char **spilt_command(char *command)
{
	const char *del = " \n";
	char *token, *sec_token;
	char **args;
	int i = 0, token_num = 0;
	char *copy;

	copy = malloc(sizeof(char) * strlen(command));
	copy = strdup(command);

	token = strtok(copy, del);

	while (token != NULL)
	{
		token_num++;
		token = strtok(NULL, del);
	}
	free(copy);

	args = malloc(sizeof(char *) * (token_num + 1));

	sec_token = strtok(command, del);

	while (sec_token != NULL)
	{
		args[i] = strdup(sec_token);
		sec_token = strtok(NULL, del);
		i++;
	}
	args[i] = NULL;
	free(command);
	free(token);
	return (args);
}
