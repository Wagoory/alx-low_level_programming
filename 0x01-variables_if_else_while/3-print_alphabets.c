#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: for statement
 *
 * Return: always 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	for (c <= 'z'; c++)
	{
		putchar(c);
	}

	for (C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
