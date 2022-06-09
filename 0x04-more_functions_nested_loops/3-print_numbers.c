#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int count;

	count = 48;
	while (count <= 57)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
	return (0);
}
