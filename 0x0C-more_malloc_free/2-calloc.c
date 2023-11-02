#include "main.h"

/**
 * *_calloc - that allocates memory for an array using malloc.
 * @nmemb: The number of array elements.
 * @size: The size of array.
 *
 * Return: Void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *arr;

	if (nmemb = 0 || size == 0)
		return (NULL);

	*arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
