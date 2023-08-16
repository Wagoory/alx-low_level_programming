#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @r: prints the last digit of a number
 *
 * Return: return -1 if r is negative and 1 if r is positive
 */
int print_last_digit(int r)
{
	int l;

	if (r < 0)
	{
		l = -1 * (r % 10);
	}
	else
	{
		l = r % 10;
	}
	_putchar(l + '0');
	return (l);
}
