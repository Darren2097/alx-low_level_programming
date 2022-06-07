#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: i is an ASCII character
 *
 * Return: returns the absolute number
 */

int _abs(int i)
{
	int i;

	if (i < 0)
	{
		i = (-1 * i);
		return (i);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
