#include "main.h"

/**
 * rot123 -  encodes a string using rot13.
 * @s: The given string.
 *
 * Return: a pointer to the resulting string s.
 */

char *rot(char *s)
{
	int i = 0;
	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	while (s[i] != '\0')
	{
		int j = 0;

		while (x[j] != '\0')
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			{
			j++;
		}

		i++;
	}

	return (s);
}
