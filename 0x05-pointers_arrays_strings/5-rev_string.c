#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: string variable
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count, len;

	len = strlen(s) - 1;
	_putchar(s);

	for (count = len; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
