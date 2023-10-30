#include "main.h"

/**
 * w_count - returns the count of words.
 * @str: The string.
 *
 * Return: Int.
 */

int w_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}

	count += 1;

	return (count);
}

/**
 * **strtow - splits a string into words.
 * @str: The given string.
 *
 * Return: Char.
 */

char **strtow(char *str)
{
	int i, j, k, x, y = 0, count;
	char **s;

	if (*str == '\0' || str == NULL)
		return (NULL);

	count = w_count(str);

	if (count == 1)
		return (NULL);
	s = malloc(count * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[count - 1] = NULL;
	for (i = 0; s[i]; i++)
	{
		if ((str[i - 1] == ' ' || i == 0) && str[i] != ' ')
		{
			j = 1;

			while (str[i + j] && str[i + j] != ' ')
				j++;
			s[y] = malloc((j + 1) * sizeof(char));
			if (s[y] == NULL)
			{
				for (x = 0; x < y; x++)
					free(s[x]);
				free(s[count - 1]);
				free(s);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				s[y][k] = str[i + k];
			y++;
			i += j;
		}
		else
			i++;
	}
	return (s);
}
