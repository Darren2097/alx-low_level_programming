#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to anither number
 * @n: first integer
 * @m: second integer
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	unsigned long int xor;

	bits = 0;
	xor = n ^ m;
	while (xor)
	{
		bits++;
		xor = xor >> 1;
	}

	return (bits);
}
