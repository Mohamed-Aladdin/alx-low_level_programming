#include "main.h"

/**
 * _strcat - appends the src string to the dest
 * string,overwriting the terminating null byte
 * (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: The first pointer.
 * @src: The second pointer.
 *
 * Return: a pointer to the resulting
 * string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i+j] = src[j];
		j++;
	}

	dest[i+j] = '\0';
	return (dest);
}
