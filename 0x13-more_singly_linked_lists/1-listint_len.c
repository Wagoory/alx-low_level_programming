#include "lists.h"

/**
 * listint_len - returns the number of elements in list
 * @h: head of a list
 * Return: nodes no.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
