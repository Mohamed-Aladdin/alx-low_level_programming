#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: The given list.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const list_t *h)
{
	const listint_t *current = h;
	size_t nodes_len = 1;

	if (h == NULL)
		return (0);

	nodes_len += list_len(current->next);

	return (nodes_len);
}
