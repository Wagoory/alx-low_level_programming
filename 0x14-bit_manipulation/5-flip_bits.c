#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: last number
 * Return: no. of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, i = n ^ m;

	while (i)
	{
		if (i & 1)
			num += 1;
		i >>= 1;
	}
	return (num);
}
