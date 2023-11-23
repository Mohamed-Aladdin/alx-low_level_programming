#include "main.h"

/**
 * get_endianness - checks the endianness.
 * would need to flip to get from one number to another.
 *
 * Return: Int.
 */

int get_endianness(void)
{
	unsigned int y = 1;
	char *x = (char *) & y;

	if (*x)
		return (1);

	return (0);
}
