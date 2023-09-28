#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	int j = 0;

	if (!b)
		return (0);
	while (b[j])
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		c = c * 2 + (b[j]++ - '0');
	}
	return (0);
}
