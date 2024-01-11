#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The given head of the list.
 * @idx: The given index.
 * @n: The given data.
 *
 * Return: returns the sum of all the data (n) of a dlistint_t linked list or 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *pos;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !h)
		return (new_node ? free(new_node), NULL : NULL);
	pos = *h;
	new_node->n = n;
	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = pos ? pos : NULL;
		if (pos)
		{
			pos->prev = new_node;
		}
		return (*h = new_node);
	}
	for (; pos; pos = pos->next, idx--)
	{
		if (idx - 1 == 0)
		{
			new_node->prev = pos;
			new_node->next = pos->next;
			if (new_node->next)
				new_node->next->prev = new_node;
			pos->next = new_node;
			return (new_node);
		}
	}
	return (free(new_node), NULL);
}
