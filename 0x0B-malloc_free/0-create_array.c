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
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(char));

		if (ar == NULL)
		{
			return (NULL);
		}

		ar[0] = c;
	}
	free(ar);
	return (ar);
}
