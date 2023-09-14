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

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int list = va_arg(args, int);

			printf("%d", list);
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
