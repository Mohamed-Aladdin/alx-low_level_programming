#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: The pointer to the head of the list.
 * @index: The index of the list where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		temp = current;
		*head = current->next;
		free(temp);

		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
