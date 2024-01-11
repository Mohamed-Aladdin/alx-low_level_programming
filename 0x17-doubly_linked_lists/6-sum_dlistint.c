#include "lists.h"

/**
 * sum_dlistint - The sum of all the data (n) of a dlistint_t linked list.
 * @head: The given head of the list.
 *
 * Return: returns the sum of all the data (n) of a dlistint_t linked list or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
