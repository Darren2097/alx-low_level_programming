#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Unsigned integer
 *
 * Return: pointer to allocated memory, else returns 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	unsigned int mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		return (98);
	}

	return (mem);
}
