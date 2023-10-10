#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet();

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int i = 0;

	while (i <= 10)
	{
		char letter = 'a';

        	while (letter <= 'z')
        	{
                	putchar(letter);
                	letter++;
        	}

        	putchar('\n');
        	return;
	}

        putchar('\n');
        return;
}
