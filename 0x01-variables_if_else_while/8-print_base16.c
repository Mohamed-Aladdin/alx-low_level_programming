#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 'a';

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}

	while (j <= 'f')
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
