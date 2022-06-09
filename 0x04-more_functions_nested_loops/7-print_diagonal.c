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

	numtimes = 0;

	if (n > 0)
	{
		while (n > numtimes)
		{
			spaces = 0;
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
