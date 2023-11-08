#include "3-calc.h"

/**
 * main - entry point.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
