#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The given list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t nodes_len = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);

	nodes_len += print_list(current->next);

	return (nodes_len);
}
