#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int r, hash, spaces;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (spaces = size - 1; spaces > r; spaces--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < r + 1; hash++)
			{
				_putchar('#');
			}
			_putchar('n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
