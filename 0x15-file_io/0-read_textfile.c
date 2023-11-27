#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The given file name.
 * @letters: The number of letters to be printed.
 *
 * Return: The actual number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	int op, rd, wr;

	if (!filename)
		return (0);

	op = open(filename, O_RDWR);

	if (op < 0)
		return (0);

	rd = read(op, buffer, letters);

	if (rd < 0)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr < 0)
		return (0);

	close(op);
	free(buffer);

	return (wr);
}
