#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes it with a specific char
 * @size: size of array
 * @c: character initialized
 *
 * Return: returns the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *ar;
	
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = (char*) malloc(size * sizeof(char));

		if (ar == NULL)
		{
			return (NULL);
		}

		for (count = 0; count < size; count++)
		{
			*(ar + count) = c;
		}
	}
	free(ar);
	return (ar);
}
