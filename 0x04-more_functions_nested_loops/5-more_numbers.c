#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: void.
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			_putchar('0' + j);
			j++;
		}
	
	_putchar('\n');
	}
}
