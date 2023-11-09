#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: The given separator.
 * @n: The count of params.
 *
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
