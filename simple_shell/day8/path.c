#include "main.h"

char *get_path(char *user_command)
{
	char *current_path = getenv("PATH");
	char *token, *dupl;
	char buff[256];

	if (current_path == NULL)
		return (NULL);
	
	dupl = strdup(user_command);
	token = strtok(dupl, ":");

	printf("%s\n", current_path);

}
