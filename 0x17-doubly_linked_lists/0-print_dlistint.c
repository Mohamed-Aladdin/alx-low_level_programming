#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The given list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_len = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		node_len++;
	}

	return (node_len);
}
