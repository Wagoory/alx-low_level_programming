#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: head of list
 * Return: number of freed elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			*h = temp;
			length++;
		}
		else
		{
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
