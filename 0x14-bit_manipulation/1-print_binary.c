#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the decimal number in binary
 * @n: integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int count;
	unsigned long int digit;

	for (count = 63; count >= 0; count--)
	{
		digit = (n >> count) & 1;
		if (digit == 1)
		{
			_putchar(((n >> count) & 1) + '0');
		}
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
