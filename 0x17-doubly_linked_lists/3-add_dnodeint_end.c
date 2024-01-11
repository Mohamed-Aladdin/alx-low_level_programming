#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The given head of the list.
 * @n: The given data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *start_node;

	start_node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	if (!*head)
	{
		new_node->next = NULL;
		new_node->n = n;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (start_node->next)
		start_node = start_node->next;
	start_node->next = new_node;
	new_node->prev = start_node;
	new_node->next = NULL;
	new_node->n = n;

	return (new_node);
}
