#include <stdio.h>
/**
 * main - main function
 *
 * Return: none
 */
int main(void)
{
	unsigned long int a, b, c;
	unsigned long int d, e, f, g;

	b = 1;
	c = 2;

	printf("%lu", b);
	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}
	d = b / 1000000000;
	e = b % 1000000000;
	f = c / 1000000000;
	g = c % 1000000000;
	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", f + (g / 1000000000));
		printf("%lu", g % 1000000000);
		f = f + d;
		d = f - d;
		g = g + e;
		e = g - e;
	}
	printf("\n");
	return (0);
}
