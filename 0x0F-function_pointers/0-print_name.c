#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: The given name.
 * @f: The given pointer to the function.
 *
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
