#include <unistd.h>

/**
 * _putchar - printss the given character.
 * @c: The given character.
 *
 * Return: 1 if success, otherwise 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
