#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: starting index
 * Return: 1 in success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(*n << index);
	return (1);
}
