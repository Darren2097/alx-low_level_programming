#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string variable
 *
 * Return: void
 */

void puts2(char *str)
{
	int count, len;

	count = 0;
	len = strlen(str) + 1;
	while (count < len)
	{
		_putchar(str[count]);
		count = count + 2;
	}

	_putchar('\n');
}
