#include "main.h"
/**
 * more_numbers - prints 10 times the numbers.
 * Return: void.
 */

void more_numbers(void)
{
	int i = 1, j = 0;

	while (i <= 10)
	{
		while (j < 15)
		{
			if (j >= 10)
				_putchar('0' + (j / 10));

			_putchar('0' + (j % 10));
			j++;
		}

		i++;
		_putchar('\n');
	}
}
