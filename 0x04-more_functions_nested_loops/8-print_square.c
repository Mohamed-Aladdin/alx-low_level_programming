#include "main.h"
/**
 * print_square - prints a square,
 * followed by a new line.
 * @size: The size of the square.
 * Return: void.
 */

void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
