#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @int: int is an ASCII character
 *
 * Return: void
 */

int _abs(int)
{
	int i;

	if (i < 0)
	{
		i = (-1 * i);
		_putchar(i);
	}
	else
	{
		_putchar(i);
	}
}
