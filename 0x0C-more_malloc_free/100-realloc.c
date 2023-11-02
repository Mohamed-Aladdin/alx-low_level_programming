#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: The given pointer.
 * @old_size: The old size.
 * @new_size: The new size.
 *
 * Return: Void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
