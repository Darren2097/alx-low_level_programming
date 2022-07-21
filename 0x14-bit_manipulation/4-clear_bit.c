#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	one = 1;
	one = one << index;
	one = ~one;
	*n = *n & one;

	return (1);
}
