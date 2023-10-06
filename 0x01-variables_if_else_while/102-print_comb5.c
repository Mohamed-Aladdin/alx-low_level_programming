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

		while (j <= 8)
		{
			int k = i;

			while (k <= 9)
			{
				int m = j + 1;

				while (m <= 9)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + i);
					putchar('0' + k);

					if (i == 9 && j == 8)
						break;

					putchar(',');
					putchar(' ');
					m++;
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
