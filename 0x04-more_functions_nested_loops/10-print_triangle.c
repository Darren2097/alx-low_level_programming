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

	hash = 0;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (spaces = size - 1; spaces > r; spaces--)
			{
				_putchar(' ');

				while (hash < r + 1)
				{
					_putchar('#');
					hash++;
				}
			}
			_putchar('\n');
			r++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
