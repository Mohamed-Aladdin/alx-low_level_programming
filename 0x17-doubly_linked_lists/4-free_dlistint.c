#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: The given head of the list.
 *
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head)
	{
		f = head;
		head = head->next;
		free(f);
	}
}
