/**
 * _puts_recursion - prints string
 * @s: string being printed
 * return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
