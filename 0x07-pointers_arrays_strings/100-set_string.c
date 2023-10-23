#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: The first pointer address.
 * @to: The string.
 *
 * Return: Void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
