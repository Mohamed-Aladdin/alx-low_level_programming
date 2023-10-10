#include "main.h"

/**
 * print_times_table - prints the 9 times table,
 * starting with 0.
 * @n: The parameter or number given.
 * Return: void.
 */

void print_times_table(int n)
{
	if (n <= 15)
	{
		int x = 0;

		while (x <= n)
		{
			int y = 0;

			while (y <= n)
			{
				int z = x * y;

				if (z > 9)
				{
					if (z > 99)
					{
						_putchar('0' + (z / 100));
						_putchar('0' + ((z / 10) % 10));
					}
					else
						_putchar('0' + (z / 10));
				}
				_putchar('0' + (z % 10));
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');

					if ((x * (y + 1)) < 100)
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
}
