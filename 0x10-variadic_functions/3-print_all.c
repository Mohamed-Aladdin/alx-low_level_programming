#include "function_pointers.h"

/**
 * print_all - prints anything.
 * @format: The list of types of arguments passed to the function.
 *
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(list, char * != NULL))
			printf("%s", va_arg(list, char *));
		else
			printf("(nil)");

		if (i < n - 1 || separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
