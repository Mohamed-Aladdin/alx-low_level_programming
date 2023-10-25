#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the given string.
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(--s);
	}

	return (sum);
}
