#include "main.h"

/**
 * swap_int - swap values of 2 numbers
 * @a: first number
 * @b: second number
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int point = *a;
	*a = *b;
	*b = point;
}
