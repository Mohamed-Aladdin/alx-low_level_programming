#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: The given head of the list.
 * @index: The given index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pos, *tmp;

	if (head)
	{
		pos = *head;
		if (index < 1)
		{
			if (!pos)
				return (-1);
			*head = pos->next;
			if (*head)
				(*head)->prev = NULL;
			free(pos);
			return (1);
		}
		for (; pos; pos = pos->next, index--)
		{
			if (index - 1 == 0)
			{
				tmp = pos->next;
				if (!tmp)
					break;
				pos->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = pos;
				free(tmp);
				return (1);
			}
		}
	}
	return (-1);
}
