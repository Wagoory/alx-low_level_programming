#include "main.h"
/**
 * main - Entry point
 *
 * Description - print _putchar
 *
 * Return: always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(c[ch]);
	}
	_putchar('\n');
	return (0);
}
