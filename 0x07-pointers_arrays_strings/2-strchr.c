#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: The first pointer.
 * @c: The second char.
 *
 * Return: a pointer to the result.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	if (s[i] == c)
		return (s + i);
	return (0);
}
