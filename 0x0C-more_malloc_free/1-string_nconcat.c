#include "main.h"
#include "_strlen.c"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The bytes of the second string.
 *
 * Return: Char.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0, length, l = n;
	char *full_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (l >= _strlen(s2))
		length = _strlen(s1) + _strlen(s2);
	else
		length = _strlen(s1) + l;

	full_str = malloc((length + 1) * sizeof(char));

	if (full_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		full_str[j++] = s1[i];
	}

	for (i = 0; i < l; i++)
	{
		full_str[j++] = s2[i];
	}

	full_str[j] = '\0';

	return (full_str);
}
