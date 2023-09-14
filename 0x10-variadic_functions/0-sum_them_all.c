#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first parameter
 * Return: rerurns Zero if n == 0
 * otherwise returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list par;

	va_start(par, n);

	if (n == 0)
		return (0);
	for (int i = 0; i < n; i++)
	{
		int sum += av_arg(par, int);
	}
	va_end(par);
	return (sum);
}
