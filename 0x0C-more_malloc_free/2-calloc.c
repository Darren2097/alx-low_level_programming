#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size bytes of array
 *
 * Return: pointer to allocated memory, else returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
