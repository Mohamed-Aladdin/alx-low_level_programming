#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The pointer to the head of the list.
 * @index: The index of the node.
 *
 * Return: The nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
		i++;
	}

	return (head);
}
