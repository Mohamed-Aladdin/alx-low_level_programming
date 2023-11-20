#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The number.
 *
 * Return: The address of the new node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	current = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;

		return (*head);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
