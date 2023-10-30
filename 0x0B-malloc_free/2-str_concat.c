#include "main.h"
#include "_strlen"
/**
 * *str_concat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Char.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, length = 0;
	char *full_str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	length = _strlen(s1) + _strlen(s2) + 1;

	full_str = malloc(length * sizeof(char));

	if (full_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		full_str[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		full_str[j++] = s2[i];
	}

	return (full_str);


}
