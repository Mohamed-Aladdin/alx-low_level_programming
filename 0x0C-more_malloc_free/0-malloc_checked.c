#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: The size of memory.
 *
 * Return: Void.
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
