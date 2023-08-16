#include "main.h"
/**
 * print_alphabet - entry point
 *
 * description - prints alphabets
 *
 * Return: none
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
