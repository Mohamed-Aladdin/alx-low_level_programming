#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list.
 * @head: The pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr1, *curr2;

	if (head == NULL)
		return (NULL);
	curr1 = head;
	curr2 = head;

	while (curr2->next && curr2->next->next)
	{
		curr2 = curr2->next->next;
		curr1 = curr1->next;

		if (curr1 == curr2)
		{
			curr1 = head;

			while (curr1 != curr2)
			{
				curr1 = curr1->next;
				curr2 = curr2->next;
			}

			return (curr2);
		}
	}

	return (NULL);
}
