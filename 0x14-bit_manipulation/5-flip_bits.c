#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: The first given number.
 * @m: The second given number.
 *
 * Return: Unsigned Int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int value = 0;

	wile (i)
	{
		value += i & 1;
		i >>= 1;
	}

	return (value);
}
