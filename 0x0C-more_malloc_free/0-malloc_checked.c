#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);

}
