#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: The first boundary.
 * @max: The second boundary.
 *
 * Return: Int.
 */

int *array_range(int min, int max)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);


}
