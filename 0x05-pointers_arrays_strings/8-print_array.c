#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: The given array.
 * @n: The given number.
 *
 * Return: Void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		if (i == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}

	_putchar('\n');
}
