#include "main.h"

char *get_line()
{
	char *Buff;
	size_t Buff_Size;
	int line;

	write(1, "$", 2);
	line = getline(&Buff, &Buff_Size, stdin);

	if (line == -1)
	{
		free(Buff);
		return (0);
	}

	return (Buff);

}
