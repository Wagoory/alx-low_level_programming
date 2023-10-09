#include "main.h"

void execute(char **exev)
{
	pid_t pid;
	pid = fork();

	if (pid == 0)
	{
		if(execve(exev[0], exev, NULL) == -1)
		{
			perror(exev[0]);
			freearr(exev);
		}
	}
	else
	{
		wait(NULL);
		free(exev);
	}
}	
