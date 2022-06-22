#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: n is an integer
 *
 * Return: returns -1 if n does not have a natural root number, otherwise
 * it will return the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (sqrt(n));
	}
}
