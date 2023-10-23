#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The first pointer.
 * @accept: The second pointer.
 *
 * Return: an int to the result.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum += 1;
				break;
			}
		}

		if (s[j] == '\0')
			return (sum);
		i++;
	}

	return (sum);
}
