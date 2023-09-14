#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int list = va_arg(args, int);

		printf("%d", list);
		if (i < n - 1 && separator == NULL)
			printf("%s", separator);
	}


	va_end(args);
	printf("\n");
}
