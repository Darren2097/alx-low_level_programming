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
	int len, count, newstr, add;

	len = strlen(s);

	for (count = len; count == 0; count --)
	{
		add = s[count];
		strcat(newstr, add);
	}

	_putchar(newstr);
	_putchar('\n');
}
