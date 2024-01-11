#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The given head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: returns the nth node of a dlistint_t linked list or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head->next; i++)
		head = head->next;
	if (i < index)
		return (NULL);
	return (head);
}
