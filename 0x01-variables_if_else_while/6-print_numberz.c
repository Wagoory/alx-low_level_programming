#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: putchar function
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	for (num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
