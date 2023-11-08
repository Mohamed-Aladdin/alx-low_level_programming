#include "function_pointers.h"
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

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	
	return (0);
}
