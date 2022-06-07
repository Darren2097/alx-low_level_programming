#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @l: l is an ASCII character
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int l)
{
	int last = l % 10;

	if (l < 0)
	{
		l = -1 * l;
	}
	_putchar(last + '0');
	return (last);
}
