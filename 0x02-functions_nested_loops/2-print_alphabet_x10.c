#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int count1, count2;

	count1 = 0;

	while (count1 < 10)
	{
		count2 = 97;

		while (count2 < 123)
		{
			char c = count2;

			_putchar(c);
			count2++;
		}
		_putchar('\n');
		count1++;
	}
}
