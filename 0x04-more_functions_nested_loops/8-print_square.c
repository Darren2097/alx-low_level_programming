#include "main.h"

/**
 * print_square - prints a square on the terminal
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int r, c;

	if (size > 0)
	{
		r = 0;
		while (size > r)
		{
			c = 0;
			while (size > c)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			r++;
		}
	else
	{
		_putchar('\n');
	}
}
