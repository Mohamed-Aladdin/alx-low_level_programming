#include "function_pointers.h"

/**
 * array_iterator - searches for an integer.
 * @array: The given array.
 * @size: The given array size.
 * @cmp: The given pointer to function.
 *
 * Return: Int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
