#include "main.h"

/**
 * print_times_table - prints the 9 times table,
 * starting with 0.
 * Return: void.
 */

void print_times_table(int n)
{
	int x = 0;

	while (x < n)
	{
		int y = 0;

		while (y < n)
		{
			int z = x * y;

			if (z > n)
				_putchar('0' + (z / 10));
			_putchar('0' + (z % 10));

			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((x * (y + 1)) < 10)
					_putchar(' ');
			}

			y++;
		}

		_putchar('\n');
		x++;
	}
}
