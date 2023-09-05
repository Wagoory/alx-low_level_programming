#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @c: character
 * @size: size of array
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
