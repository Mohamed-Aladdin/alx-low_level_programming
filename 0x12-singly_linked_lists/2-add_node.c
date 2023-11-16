#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The pointer to the head of the list.
 * @str: The node's data.
 *
 * Return: The address or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);

	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
