#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: x is an integer
 * @y: y is an integer
 *
 * Return:  returns -1 if y is negative, otherwise it will return the value
 * of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return ((int)(pow(x, y)));
	}
}
