#include "main.h"

/**
 * root_checker - checks for square root.
 * @num: The number.
 * @sqrt_root: The root.
 *
 * Return: an Integer.
 */

int root_checker(int num, int sqrt_root)
{
	if (sqrt_root * sqrt_root == num)
		return (sqrt_root);
	else if (sqrt_root * sqrt_root > num)
		return (-1);

	return (root_checker(num, sqrt_root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number.
 *
 * Return: The natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (root_checker(n, 1));
}
