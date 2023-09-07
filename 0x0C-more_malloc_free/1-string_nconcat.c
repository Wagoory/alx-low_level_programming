#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes concatinated from s2
 * Return: pointer pointing to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, s2_len, s1_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	str =  malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
