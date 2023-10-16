#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The given string.
 *
 * Return: Void.
 */

void rev_string(char *s)
{
	int i = 0, j, length;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;
	j = i - 1;
	i = 0;

	while (i < length / 2)
	{
		tmp = s[i];
		s[i] = s[length - j];
		s[length - j] = tmp;
		i++;
	}

}
