#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (atoi(argv[1]) - 1); ptr++)
		printf("%02x ", *ptr);

	printf("%02x\n", *ptr);

	return (0);
}
