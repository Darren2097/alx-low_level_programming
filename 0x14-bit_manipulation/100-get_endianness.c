#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 0x76543210;
	c = (char *) &n;

	if (*c == 0x10)
		return (1);

	return (0);
}
