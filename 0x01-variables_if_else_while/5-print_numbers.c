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
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
