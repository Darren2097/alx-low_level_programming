#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string variable
 *
 * Return: returns 0 if no integer in string
 */

int _atoi(char *s)
{
	int val;

	val = atoi(s);

	if (val == 0)
	{
		return (0);
	}
	else
	{
		return (val);
	}
}
