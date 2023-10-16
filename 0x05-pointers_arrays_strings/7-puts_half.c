#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The given string.
 *
 * Return: Void.
 */

void puts_half(char *str)
{
	int i = _strlen(str);

	if (i % 2 == 0)
		i /= 2;
	else
		i = (i / 2) + 1;


	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
