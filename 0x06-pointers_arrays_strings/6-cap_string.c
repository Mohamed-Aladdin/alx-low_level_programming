#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The given string.
 *
 * Return: a pointer to the resulting string str.
 */

char *cap_string(char *str)
{
	int i = 0, length = 13;
	char spr[13] = {' ', '\t', '\n', '.', ';', ',', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < length)
		{
			if ((str[i] >= 97 && str[i] <= 122) && (i == 0 || str[i - 1] = spr[j]))
				str[i] -= 32;
			j++;
		}

		i++;
	}

	return (str);
}
