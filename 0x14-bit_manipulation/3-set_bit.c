#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index.
 * @n: The given number.
 * @index: The given index.
 *
 * Return: Int.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	*n |= (1 << index);

	return (1);
}
