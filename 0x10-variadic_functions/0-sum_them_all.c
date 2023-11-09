#include "function_pointers.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The count of params.
 *
 * Return: Int.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);

	va_end(list);

	return (sum);
}
