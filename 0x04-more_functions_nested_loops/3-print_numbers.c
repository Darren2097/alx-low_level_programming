#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int count;

	count = 0;
	while (count <= 9)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
