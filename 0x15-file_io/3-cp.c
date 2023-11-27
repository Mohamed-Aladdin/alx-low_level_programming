#include "main.h"

/**
 * print_error - prints error and exit with the corresponding value.
 * @msg: The string.
 * @filename: The file.
 * @exit_value: The value.
 *
 * Return: Void.
 */

void print_error(char *filename, char *msg, int exit_value)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, filename);
	exit(exit_value);
}

/**
 * main - entry point.
 * @argc: The number of arguments.
 * @argv: The pointer to the array of arguments.
 *
 * Return: 0 always.
 */

int main(int argc, char **argv)
{
	int opsrc, opdst, rd, wr;
	char *buffer[1024];

	if (argc != 3)
		print_error("", "Usage: cp file_from file_to", 97);

	opdst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (opdst < 0)
		print_error(argv[2], "Error: Can't write to ", 99);

	opsrc = open(argv[1], O_RDONLY);
	if (opsrc < 0)
		print_error(argv[1], "Error: Can't read from file ", 98);

	do {
		rd = read(opsrc, buffer, 1024);

		if (rd < 0)
			print_error(argv[1], "Error: Can't read from file ", 98);

		wr = write(opdst, buffer, rd);

		if (wr < 0 || wr != rd)
			print_error(argv[2], "Error: Can't write to ", 99);
	} while (wr == 1024);

	if (close(opsrc))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opsrc);
		exit(100);
	}
	if (close(opdst))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opdst);
		exit(100);
	}
	return (0);
}
