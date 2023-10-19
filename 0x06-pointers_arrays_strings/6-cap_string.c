#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: The given string.
 *
 * Return: a pointer to the resulting string s.
 */

char *cap_string(char *s)
{
	int i = 0, length = 13;
	char spr[] = {' ', '\t', '\n', '.', ';', ',', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < length)
		{
			if ((s[i] >= 97 && s[i] <= 122) && (i == 0 || s[i - 1] = spr[j]))
				s[i] -= 32;
			j++;
		}

		i++;
	}

	return (s);
}
