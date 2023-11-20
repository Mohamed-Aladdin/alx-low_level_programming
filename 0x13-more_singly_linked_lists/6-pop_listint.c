#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: The pointer to the head of the list.
 *
 * Return: Int.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
