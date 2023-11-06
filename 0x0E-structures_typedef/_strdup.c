#include "dog.h"
#include "_strlen.c"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string.
 *
 * Return: Char.
 */

char *_strdup(char *str)
{
	int i, length;
	char *dup;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);


}
