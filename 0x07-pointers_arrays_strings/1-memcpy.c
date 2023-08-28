#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area
 * @dest: memory area
 * @src: string to be copied
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
