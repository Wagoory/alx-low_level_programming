#include "main.h"

/**
 * factorial - calculate factorial for given var.
 * @n: value to be calculated
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}
