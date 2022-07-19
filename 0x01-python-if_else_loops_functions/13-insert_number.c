#include "lists.h"

/**
 * insert_node - program to insert a num in a sorted list
 * @head: pointer to list
 * number: number to insert
 * Return: added node address else NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *h, *h_prev;

	h = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (h != NULL)
	{
		if (h->n > number)
			break;
		h_prev = h;
		h = h->next;
	}

	new->n = number;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = h;
		if (h == *head)
			*head = new;
		else
			h_prev->next = new;
	}

	return (new);
}
