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
	char temp;

	len = strlen(*s) - 1;

	for (count = 0; count < len; count ++)
	{
		temp = *s[len];
		*s[len] = *s[count];
		*s[count] = temp;
		len--;
	}

	_putchar(*s);
	_putchar('\n');
}
