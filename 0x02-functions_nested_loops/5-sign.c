#include "main.h"

/**
 * print_sign - checks whether the number is positive or negative.
 * @n: The parameter or number to be checked.
 *
 * Return: 1 if n is greater than 0, -1 if n is less than zero, 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
