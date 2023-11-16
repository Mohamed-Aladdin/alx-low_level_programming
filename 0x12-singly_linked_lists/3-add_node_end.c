#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The pointer to the head of the list.
 * @str: The node's data.
 *
 * Return: The address or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = strlen(str);

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
