#include "main.h"

/**
 * print_last_digit - computes the absolute value of a given number.
 * @n: The parameter or number to be checked.
 *
 * Return: The last digit of number n.
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar('0' + x);
	return (x);
}
