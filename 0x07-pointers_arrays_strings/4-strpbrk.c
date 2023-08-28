#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * @s: searching
 * @accept: character to search for
 *
 * Return: s if found and NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return (0);
}
