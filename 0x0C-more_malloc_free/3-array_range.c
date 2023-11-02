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
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
