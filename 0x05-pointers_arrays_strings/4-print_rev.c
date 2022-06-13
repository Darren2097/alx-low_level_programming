#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string variable
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, count;

	len = strlen(s) - 1;

	for (count = len; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
