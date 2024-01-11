#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: The given head of the list.
 * @n: The given data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;

	if (*head)
		*head->prev = new_node;
	*head = new_node;

	return (new_node);
}
