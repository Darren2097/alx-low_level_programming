#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: c is an ASCII character
 *
 * Return: returns the absolute number
 */

int _abs(int c)
{
	int c;

	if (c < 0)
	{
		c = (-1 * c);
		return (c);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
