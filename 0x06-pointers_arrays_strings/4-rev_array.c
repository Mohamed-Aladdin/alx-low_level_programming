#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The given array.
 * @n: The number.
 *
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = s[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
