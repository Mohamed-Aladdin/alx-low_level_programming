#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int i, mul = 1;

	for (i = 0; i < argc; i++)
	{
		mul *= i;
		printf("%d\n", i);
	}
	return (0);
}
