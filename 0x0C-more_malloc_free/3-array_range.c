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
	int i = 0, length = max - min + 1, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(length * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (i < length)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
