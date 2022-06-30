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
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
