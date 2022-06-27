#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: returns a pointer to the new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	i = 1;
	while (i < ac)
	{
		_putchar("%s\n", av[i]);
		i++;
	}
}
