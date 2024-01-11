#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */

int f4(char *usrn, int len)
{
	int c;
	int vc;
	unsigned int random_n;

	c = *usrn;
	vc = 0;

	while (vc < len)
	{
		if (c < usrn[vc])
			c = usrn[vc];
		vc += 1;
	}

	srand(c ^ 14);
	random_n = rand();

	return (random_n & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */

int f5(char *usrn, int len)
{
	int c;
	int vc;

	c = vc = 0;

	while (vc < len)
	{
		c = c + usrn[vc] * usrn[vc];
		vc += 1;
	}

	return (((unsigned int)c ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */

int f6(char *usrn)
{
	int c;
	int vc;

	c = vc = 0;

	while (vc < *usrn)
	{
		c = rand();
		vc += 1;
	}

	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char kgn[7];
	int len, c, vc;
	long alpha[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	kgn[0] = ((char *)alpha)[(len ^ 59) & 63];
	c = vc = 0;
	while (vc < len)
	{
		c = c + argv[1][vc];
		vc = vc + 1;
	}
	kgn[1] = ((char *)alpha)[(c ^ 79) & 63];
	c = 1;
	vc = 0;
	while (vc < len)
	{
		c = argv[1][vc] * c;
		vc = vc + 1;
	}
	kgn[2] = ((char *)alpha)[(c ^ 85) & 63];
	kgn[3] = ((char *)alpha)[f4(argv[1], len)];
	kgn[4] = ((char *)alpha)[f5(argv[1], len)];
	kgn[5] = ((char *)alpha)[f6(argv[1])];
	kgn[6] = '\0';
	for (c = 0; kgn[c]; c++)
		printf("%c", kgn[c]);
	return (0);
}
