#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerLetter = 'a';

	while (lowerLetter <= 'z')
	{
		if (lowerLetter == 'e' || lowerLetter == 'q')
		{
			lowerLetter++;
			continue;

		}
		putchar(lowerLetter);
		lowerLetter++;
	}

	putchar('\n');
	return (0);
}
