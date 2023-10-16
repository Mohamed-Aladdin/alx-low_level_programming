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
	j = 0;

	while (j < length / 2)
	{
		tmp = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = tmp;
		j++;
	}

}
