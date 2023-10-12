#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * line on the terminal.
 * @n: the number of times the
 * character \ should be printed.
 * Return: void.
 */

void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar('\n');
}
