#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
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
	putchar('\n');
	return;
}
