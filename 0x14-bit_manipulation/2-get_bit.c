#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: starting index
 * @n: number
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int n) * 8)
		return (-1);
	if (1 << index == 0)
		return (0);
	return(1);
}
