#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = i;

		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');

			int k = j + 1;

			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + k);

				if (i == 9 && j == 8)
					break;

				putchar(',');
				putchar(' ');
				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
