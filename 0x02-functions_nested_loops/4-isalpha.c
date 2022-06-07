#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: c is a ASCII character
 *
 * Return: returns 1 if is a letter, and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c > 'A' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
