#include "main.h"

/**
 * print_line - prints a line across the terminal
 * @n: length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int numTimes;

	numTimes = 0;

	if (n > 0)
	{
		while (n > numTimes)
		{
			_putchar('_');
			numTimes++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
