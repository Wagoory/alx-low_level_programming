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
	char c;
	char ch;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
