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
	unsigned int num;
	int length, i;

	if (b == NULL)
		return (0);

	if (*b == 0)
	{
		return (0);
	}

	length = 0;
	while (b[length] != '\0')
	{
		length++;
	}

	num = 0;
	for (i = length - 1; i >= 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num += (b[i] - '0') * pow(2, length - i - 1);
	}

	return (num);
}
