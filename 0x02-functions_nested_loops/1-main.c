#include "1-main.c"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int count = 97;

	while (count < 123)
	{
		char letter = count;

		putchar(letter);
		count++;
	}

	return (0);
}
