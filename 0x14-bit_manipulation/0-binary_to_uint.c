#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: The given number.
 *
 * Return: Unsigned Int.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int value = 0;

	if (!b)
		return (0);

	while (b != '\0')
	{
		if (b[i] == '1')
			value = (value << 1) | 1;

		else if (b[i] == '0')
			value <<= 1;
		else
			return (0);

		i++;
	}

	return (value);
}
