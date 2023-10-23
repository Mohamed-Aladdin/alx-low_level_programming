#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: The first pointer.
 * @size: The number.
 *
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int i, j, x, y;

	for (i = 0; i < size; i++)
	{
		x += a[i][i];
	}

	int k = 0;

	while (k < size)
	{
		int c = 1;

		for (j = size - c; j >= 0; j--)
		{
			y += a[k][j];
			break;
		}

		k--;
		c++;
	}

	printf("%d. %d\n", x, y);
}
