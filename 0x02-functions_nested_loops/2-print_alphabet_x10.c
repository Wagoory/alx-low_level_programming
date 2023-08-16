#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * 
 * Description: prints alphabets in nested loop using while
 */
void print_alphabet_x10(void)
{
	char ch;

	while (int i = 1; i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
