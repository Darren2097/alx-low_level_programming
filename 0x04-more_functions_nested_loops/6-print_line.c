#include "main.h"

/**
 * print_line - prints a line across the terminal
 * @n: n is an ASCII character
 *
 * Return: void
 */

void print_line(int n)
{
	int numTimes;

	numtimes = 0;
	if (n > 0)
	{
		while (n > numtimes)
		{
			_putchar('_');
			numtimes++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
