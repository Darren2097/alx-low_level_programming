#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at given index
 * @n: integer
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	one = 1;
	*n = *n | (one << index);

	return (1);
}
