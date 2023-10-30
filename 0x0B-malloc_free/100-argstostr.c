#include "main.h"
/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: The count of arguments.
 * @av: The string of arguments.
 *
 * Return: Char.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = ac;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	s = malloc((length + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];

		s[k++] = '\n';
	}

	return (s);
}
