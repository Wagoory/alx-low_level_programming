#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: while statement
 *
 * Return: always 0
 */
int main(void)
{
	int n1;
	int n2;

	while (n1 <= 99)
	{
		while (n2 <= 99)
		{
			if (n2 != n1)
			{
				putchar(n1 / 10 + '0');
				putchar(n1 % 10 + '0');
				putchar(' ');
				putchar(n2 / 10 + '0');
				putchar(n2 % 10 + '0');

				if (!(n1 == 98 && n2 == 99))
				{
					putchar(',');
					putchar(' ');
				}
		
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
