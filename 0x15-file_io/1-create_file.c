#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The given string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * create_file - creates a file.
 * @filename: The given file name.
 * @text_content: The string to be written.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int op, len, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (op < 0)
		return (-1);

	if (text_content)
	{
		len = _strlen(text_content);
		wr = write(op, text_content, len);

		if (wr < 0)
			return (-1);
	}

	close(op);

	return (1);
}
