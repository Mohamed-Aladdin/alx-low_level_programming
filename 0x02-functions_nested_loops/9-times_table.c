#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
 * Return: void.
 */

void times_table(void)
{
	int x = 0;

	while (x < 10)
	{
		int y = 0;

		while (y < 10)
		{
			int z = x * y;

			if (z > 9)
				_putchar('0' + (z / 10));
			
			_putchar('0' + (z % 10));

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (z < 10)
					_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}

			y++;
		}

		x++;
	}
}
