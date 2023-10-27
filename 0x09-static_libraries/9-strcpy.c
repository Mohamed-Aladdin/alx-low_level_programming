#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The given destination.
 * @src: The given source.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, length = _strlen(src);

	while (i <= length)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
