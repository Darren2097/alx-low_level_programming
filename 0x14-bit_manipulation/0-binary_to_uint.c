#include "main.h"
#include "math.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: The converted number or 0 if there is an error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int length;

	if (b == NULL)
		return (0);

	if (*b == 0)
	{
		return (0);
	}

	length = 0;
	while (*b != '\0')
	{
		length++;
	}

	num = 0;
	power = 0;
	while (length >= 0)
	{
		if (*(b + length) == 1)
		{
			num += pow(2, power);
		}
		else if (*(b + length) != 0)
		{
			return (0);
		}
		length--;
		power++;
	}
	return (num);
}
