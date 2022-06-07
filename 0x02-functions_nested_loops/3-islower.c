#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - Checks for lowercase character
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	char i;
	i = getchar();
	int c = islower(i);

	if (c > 0)
	{
		return (1);
	else
		return (0);
	}
}
