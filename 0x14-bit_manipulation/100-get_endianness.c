#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int no = 1;
	char *c = (*char)&no;

	if (*c == 1)
		return (1);
	return (0);
}
