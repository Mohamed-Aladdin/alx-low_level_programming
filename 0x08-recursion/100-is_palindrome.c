#include "main.h"
#include "2-strlen_recursion.c"

/**
 * palindrom_checker - checks for palindrom in a string.
 * @s: The string.
 * @x: The first number.
 * @y: The second number.
 *
 * Return: an Integer.
 */

int palindrom_checker(char *s, int x, int y)
{
	if (s[x] != s[y])
		return (0);
	else if (x >= y)
		return (1);

	return (palindrom_checker(s, x + 1, y - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: The given string.
 *
 * Return: 0 or 1.
 */

int is_palindrome(char *s)
{
	int y = _strlen_recursion(s) - 1;
	return (palindrom_checker(s, 0, y));
}
