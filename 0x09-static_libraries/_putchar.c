#include <unistd.h>

/**
 * _putchar - prints the character c.
 * @c: The character.
 *
 * Return: 1 if success, otherwise 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
