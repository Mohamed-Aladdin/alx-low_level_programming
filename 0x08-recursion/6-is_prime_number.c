#include "main.h"

/**
 * prime_checker - checks for prime number.
 * @n: The iteration.
 * @num: The number.
 *
 * Return: an Integer.
 */

int prime_checker(int n, int num)
{
	if (n <= 1 || (num % n && n > 1))
		return (0);
	else if ((num / n) < n)
		return (1);

	return (prime_checker(n + 1, num));
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: The number.
 *
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	return (prime_checker(1, n));
}
