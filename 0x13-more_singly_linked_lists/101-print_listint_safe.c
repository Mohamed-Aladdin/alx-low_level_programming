#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: The pointer to the head of the list.
 *
 * Return: The address of the first node.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_len = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes_len += 1;

		if (head > head->next)
			head = head->next;
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (nodes_len);
}
