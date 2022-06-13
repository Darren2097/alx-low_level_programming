#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string variable
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, n, count;

	len = strlen(str);

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (count = n; count < len; count++)
	{
		_putchar(n[count]);
	}

	_putchar('\n');
}
