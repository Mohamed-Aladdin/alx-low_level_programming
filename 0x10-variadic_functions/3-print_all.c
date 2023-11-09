#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: The list of types of arguments passed to the function.
 *
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, switcher;
	char *str;

	while (format)
	{
		va_start(list, format);

		while (format[i])
		{
			switcher = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					switcher = 0;
					break;
			}
			if (format[i + 1] && switcher)
				printf(", ");
			i++;
		}
		va_end(list);
		break;
	}
	printf("\n");
}
