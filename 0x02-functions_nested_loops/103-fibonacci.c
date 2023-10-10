#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1 = 1, n2 = 2, sum = n1 + n2;
	long int total = 0;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
			total += sum;
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
	}

	printf("%lu\n", total);
	return (0);
}
