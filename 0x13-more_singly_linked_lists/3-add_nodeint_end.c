#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: The pointer to the head of the list.
 * @n: The node's data.
 *
 * Return: The address or NULL.
 */

listint_t *add_nodeint_end(list_t **head, const int n)
{
	listint_t *last;
	listint_t *new_node;

	if (head == NULL || n == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
