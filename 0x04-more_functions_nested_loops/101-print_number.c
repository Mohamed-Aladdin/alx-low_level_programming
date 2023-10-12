#include "main.h"
/**
 * print_number - prints an integer.
 * @n: The number to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	int tmp = n;

	if (n < 0)
	{
		tmp = -n;
		_putchar('-');
	}
	if ((tmp / 10) > 0)
		print_number(tmp / 10);

	_putchar('0' + (tmp % 10));
}
