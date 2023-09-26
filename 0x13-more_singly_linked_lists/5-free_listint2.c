#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp0;
	listint_t *temp1;

	if (head != NULL)
	{
		temp1 = *head;
		while ((temp0 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp0);
		}
		*head = NULL;
	}
}
