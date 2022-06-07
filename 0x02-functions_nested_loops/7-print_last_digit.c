#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @c: c is an ASCII character
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int c)
{
	int last = c % 10;

	if (c < 0)
	{
		c = (-1) * c;
	}

	_putchar(last + '0');
	return (last);
}
