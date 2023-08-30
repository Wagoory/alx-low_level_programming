#include "main.h"

/**
 * _strlen_recursion - outputs lenth of string
 * @s: pointer to string
 * return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
	return (strlen(*s) +  _strlen_recursion(s + 1));
	}
}
