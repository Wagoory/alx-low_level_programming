#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * Return: newly allocated space in memory with concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	 result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(result + i) = *(s1 + i);
	}
	for (j = len1; j < (len1 + len2); j++)
	{
		*(result + j) = *(s2 + j - len1);
	}
	return (result);
}
