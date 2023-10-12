#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 * Return: void.
 */

void print_triangle(int size)
{
	int i = 1;

	while (i <= size)
	{
		int j = 1;

		while (j <= size)
		{
			if (j >= i)
				_putchar('#');
			else
				_putchar(' ');
			j++;
		}

		_putchar('\n');
		i++;
	}

	if (size <= 0)
		_putchar('\n');
}
