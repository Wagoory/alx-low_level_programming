#include "main.h"

char *get_path(char *user_command)
{
	char *current_path = getenv("PATH");
	char *token, *dupl;
	char buff[256];
	char *path = NULL;

	if (current_path == NULL)
		return (NULL);
	
	dupl = strdup(current_path);
	token = strtok(dupl, ":");

	while(token)
	{
		strcpy(buff,token);
		strcat(buff, "/");
		strcat(buff, user_command);
		if (access(buff, F_OK) == 0)
		{
			path = strdup(buff);
			break;
		}
		
		token = strtok(NULL, ":");
	}
	free(dupl);
	return (path);
}



/*int main()
{
	char *command = "ls";
	char *fullpath = get_path(command);
	free(fullpath);
	
	return(0);
}
int main()
{
	char *current_path = getenv("PATH");
	printf("%s\n", current_path);

	return (0);
}*/
