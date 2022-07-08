#include "lists.h"

/**
 * check_cycle - function to check if
 * singly linked list has a cycle in it.
 * @list: pointer to the list
 *
 * Return: 0 if there is no cycle and
 * 1 if positive
 */

int check_cycle(listint_t *list)
{
	listint_t *doub = list;
	listint_t *reg = list;

	if (list == NULL)
		return (0);

	while (doub && doub->next)
	{
		reg = reg->next;
		doub = doub->next->next;

		if (reg == doub)
			return (1);
	}

	return (0);
}
