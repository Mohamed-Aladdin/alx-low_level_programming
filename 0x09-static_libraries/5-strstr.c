#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: The first pointer.
 * @needle: The second pointer.
 *
 * Return: a pointer to the result.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			int j;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					continue;
				else
					break;
			}

			if (needle[j] == '\0')
				return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
