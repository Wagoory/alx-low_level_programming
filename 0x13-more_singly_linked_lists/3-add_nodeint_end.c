#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: head of a list
 * @n: nth element
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *temp;

	(void)temp;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
	}

	return (*head);
}
