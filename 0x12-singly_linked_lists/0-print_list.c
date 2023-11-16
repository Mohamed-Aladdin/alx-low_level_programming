#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: The given list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t nodes_len = 1;

	if (h == NULL)
		return (0);

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	nodes_len += print_list(current->next);

	return (nodes_len);
}
