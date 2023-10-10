#include "main.h"

/**
 * jack_bauer - prints every minute of the day of 
 * Jack Bauer, starting from 00:00 to 23:59.
 * Return: void.
 */

void jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;

		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}

		h++;
	}
}
