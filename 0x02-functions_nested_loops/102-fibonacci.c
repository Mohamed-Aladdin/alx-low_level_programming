#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 3;
	long int n1 = 1, n2 = 2, sum = n1 + n2;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	while (i < 51)
	{
		if (i == 50)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
		i++;
	}

	return (0);
}
