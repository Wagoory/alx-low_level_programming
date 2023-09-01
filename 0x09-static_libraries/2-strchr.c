#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * @s: string to search
 * @c: character to be searched for
 *
 * Return: c if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
