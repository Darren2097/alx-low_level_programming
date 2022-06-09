#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks if character is uppercase
 * @c: c is an ASCII character
 *
 * Return: returns 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
