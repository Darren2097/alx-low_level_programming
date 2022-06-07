#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @l: l is an ASCII character
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int l)
{
	if ((l % 10) == 0)
	{
		return (0);
	}
	else
	{
		l = l % 10;
		return (l);
	}
}
