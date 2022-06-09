#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except for 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int count;

	count = '0';
	while (count <= '9')
	{
		if (count != '2' && count != '4')
		{
			_putchar(count);
		}
		count++;
	}
	_putchar('\n');
}
