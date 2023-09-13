#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
