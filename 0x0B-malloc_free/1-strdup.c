#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer which contains a copy of the string given
 * @str: string variable
 *
 * Return: returns NULL if str = NULL, else returns the string
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = strdup(str);
		return (s);
	}
}
