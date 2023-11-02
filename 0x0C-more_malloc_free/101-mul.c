#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The given string.
 *
 * Return: Void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

/**
  * _atoi - convert a string to an intger.
  * @s: The given string.
  *
  * Return: an intger
  */

int _atoi(char *s)
{
	int digit = 0, i, num = 0, sign = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = 1;
			digit *= 10;
			digit += -(s[i] - '0');
			continue;
		}
		else if (num)
		{
			i++;
			break;
		}
	}

	return (digit * sign);
}

/**
 * print_int - prints an integer
 * @n: The given number.
 * Return: Void.
 */

void print_int(unsigned long int n)
{
	unsigned long int divide = 1;
	unsigned long int i, result;

	for (i = 0; n / divide > 9; i++, divide *= 10)
		;

	for (; divide >= 1; n %= divide, divide /= 10)
	{
		result = n / divide;
		_putchar('0' + result);
	}
}

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3 || !_atoi(argv[1]) || !_atoi(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
