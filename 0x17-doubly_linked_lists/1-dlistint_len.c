#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: The given list.
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_len = 0;

	while (h)
	{
		h = h->next;
		node_len++;
	}

	return (node_len);
}
