#include "main.h"


void freearr(char **free_arg)
{
	int i = 0;

	if (!free_arg)
		return;

	while (free_arg[i])
	{
		free(free_arg[i]);
		i++;
	}
	free(free_arg);
}
