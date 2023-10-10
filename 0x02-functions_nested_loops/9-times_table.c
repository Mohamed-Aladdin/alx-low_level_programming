#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
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
			putchar('0' + z);

			if (y != 9)
			{
				putchar(',');
				putchar(' ');
				
				if (z < 10)
					putchar(' ');
			}
			else
			{
				putchar('\n');
			}
			y++;
		}

		x++;
	}
}
