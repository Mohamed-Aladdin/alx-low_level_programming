#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: The given string.
 *
 * Return: a pointer to the resulting string s.
 */

char *leet(char *s)
{
	int i = 0, length = 5;
	char letters[] = "aelot";
	char symbols[] = "43107";

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < length)
		{
			if (s[i] == letters[j] || s[i] + 32 == letters[j])
				s[i] = symbols[j];
			j++;
		}

		i++;
	}

	return (s);
}
