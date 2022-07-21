#include "main.h"
#include <stdio.h>

/**
 * _power - power of number
 * @base: base
 * @exp: exponent
 *
 * Return: result
 */

int _power(int base, int exp)
{
	int i, pow;

	pow = 1;
	for (i = 0; i < exp; i++)
	{
		pow = pow * base;
	}
	return (pow);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: The converted number or 0 if there is an error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int length, i;

	if (b == NULL)
		return (0);

	length = 0;
	while (b[length] != '\0')
	{
		length++;
	}

	num = 0;
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num += (b[i] - '0') * _power(2, length - i - 1);
	}

	return (num);
}
