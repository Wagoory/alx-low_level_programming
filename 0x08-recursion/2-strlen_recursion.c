#include "main.h"

/**
 * _strlen_recursion - outputs lenth of string
 * @s: pointer to string
 * return: variable len with string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
	int len = 1 +  _strlen_recursion(s + 1);
	}
	return (len);
}
