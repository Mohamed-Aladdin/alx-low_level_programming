#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * Return: void.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			putchar('0' + n);

			if (n == 98)
				break;

			putchar(',');
			putchar(' ')
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			putchar('0' + n);

                        if (n == 98)
                                break;

                        putchar(',');
                        putchar(' ')
                        n--;
		}
	}
}
