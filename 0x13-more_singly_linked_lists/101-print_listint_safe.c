#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: The pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	long int ref;
	size_t nodes_len = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes_len++;
		ref = head - head->next;
		head = head->next;

		if (ref <= 0)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (nodes_len);
}
