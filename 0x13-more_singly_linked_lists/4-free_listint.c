#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: The pointer to the head of the list.
 *
 * Return: Void.
 */

void free_listint(list_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
