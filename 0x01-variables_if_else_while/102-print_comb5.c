#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 98)
	{
		int j = i + 1;

		while (j <= 99)
		{
			int m = i / 10;
			int n = i % 10;
			int x = j / 10;
			int y = j % 10;

			putchar('0' + m);
			putchar('0' + n);
			putchar(' ');
			putchar('0' + x);
			putchar('0' + y);

			if (i == 98 && j == 99)
				break;

			putchar(',');
			putchar(' ');
			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
