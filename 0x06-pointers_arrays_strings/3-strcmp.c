#include "main.h"

/**
 * _strcmp - appends the src string to the dest string.
 * @s1: The first pointer.
 * @s2: The second pointer.
 * @n: The number.
 *
 * Return: a pointer to the resulting string dest.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] - s2[i] == 0)
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
