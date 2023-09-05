#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns pointer to new memory space
 * @str: sting to be copied
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{

	int i;
	int c = 0;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[c] != '\0')
	{
		c++;
	}

	a = malloc(sizeof(char) * c + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
