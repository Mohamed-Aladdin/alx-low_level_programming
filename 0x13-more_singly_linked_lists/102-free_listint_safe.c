#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: The pointer to the head of the list.
 *
 * Return: The size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;
	size_t nodes_len = 0;

	if (*h == NULL)
		return (nodes_len);

	while (*h)
	{
		nodes_len++;

		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}

	*h = NULL;
	return (nodes_len);
}
