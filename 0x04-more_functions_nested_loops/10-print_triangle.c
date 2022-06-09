#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int r, c, spaces, endspace;

	endspace = size - 1;
	for (r = 0; r < size; r++)
	{
		spaces = endspace;
		for (c = spaces; c <= size; c++)
		{
			while (spaces >= 0)
			{
				_putchar(' ');
				spaces--;
			}
			_putchar('#');
		}
		endspace--;
		_putchar('\n');
	}
}
