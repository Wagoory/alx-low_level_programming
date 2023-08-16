#include "main.h"
/**
 * times_table - Entry point
 *
 * description: print times table
 */
void times_table(void)
{
	int num;
	int mult;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			prod = num * mult;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
