#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The parameter or number given.
 * Return: void.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			printf("%d", n);

			if (n == 98)
				break;

			_putchar(',');
			_putchar(' ');
			n++;
		}

		_putchar('\n');
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);

			if (n == 98)
				break;

			_putchar(',');
			_putchar(' ');
			n--;
		}

		_putchar('\n');
	}
}
