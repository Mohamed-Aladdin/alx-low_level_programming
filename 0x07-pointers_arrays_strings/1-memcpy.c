#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: The first pointer.
 * @src: The second char.
 * @n: The number.
 *
 * Return: a pointer to the result.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
