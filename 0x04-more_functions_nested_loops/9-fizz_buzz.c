#include <stdio.h>
/**
 * main - Entry point
 * Return:  Always 0 (Success)
 */

int main(void)
{
	int i = 2;

	printf("%d", 1);
	while (i <= 100)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0 )
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
