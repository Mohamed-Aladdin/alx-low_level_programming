#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: The pointer to the head of the list.
 *
 * Return: The address of the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
