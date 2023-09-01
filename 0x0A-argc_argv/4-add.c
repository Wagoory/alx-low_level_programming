#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc:argument increasement
 * @argv: argument pointer
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *c;
	int sum = 0;

	while (--argc)
	{

		for (c = argv[argc]; *c;  c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
