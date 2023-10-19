#include "main.h"

/**
 * *_strncpy - appends the src string to the dest string.
 * @dest: The first pointer.
 * @src: The second pointer.
 * @n: The number.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
