#include "main.h"

/**
 * print_diagonal - prints a diagonal line across the terminal
 * @n: length of line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int spaces, numtimes;

	spaces = 0;
	numtimes = 0;

	if (n > 0)
	{
		while (n > numtimes)
		{
			while (spaces < numtimes)
			{
				_putchar(' ');
				spaces++;
			}
			_putchar('\\');
			_putchar('\n');
			numtimes++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
