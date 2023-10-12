#include "main.h"
/**
 * print_line - draws a straight line
 * in the terminal.
 * @n: the number of times the
 * character _ should be printed.
 * 
 * Return: void.
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
