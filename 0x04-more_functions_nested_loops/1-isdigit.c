#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: c is an Integer
 *
 * Return: returns 1 if c is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c < '10')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
