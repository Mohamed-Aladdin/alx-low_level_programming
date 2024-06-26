#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Int.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high, low, mid;

	high = (int)size - 1;
	low = 0;

	if (!array)
		return (-1);
	do {
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (mid >= (int)size)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	} while (array[high] != array[low] && (array[low] <= value) &&
			(array[high]) >= value);
	return (-1);
}
