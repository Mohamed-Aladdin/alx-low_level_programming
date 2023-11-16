#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The given list.
 *
 * Return: The number of nodes.
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int nodes_len = 0;

	nodes_len += list_len(current->next);
}
