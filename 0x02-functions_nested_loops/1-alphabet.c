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
		char c = count;

		_putchar(c);
		count++;
	}
	_putchar('\n');
}
