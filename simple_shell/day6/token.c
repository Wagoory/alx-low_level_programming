#include "main.h"

char **token(char *user_command)
{
	char *token, *dupl, **args;
	const char *delim = " \n";
	int count = 0, i = 0;

	dupl = strdup(user_command);
	token = strtok(dupl, delim);

	if (token == NULL)
	{
		free(token);
		free(user_command);
		return (NULL);
	}
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delim);
	}
	free(dupl);

	args = malloc(sizeof(char *) * (count + 1));
	if (!args)
	{
		free(user_command);
		return (NULL);
	}
	token = strtok(dupl, delim);
	while (token != NULL)
	{
		args[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}

	free(token);
	args[i] = NULL;
	return (args);
}
