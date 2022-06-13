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
	int count;

	count = 0;
	while (count < strlen(str) + 1)
	{
		_putchar(str[count]);
		count = count + 2;
	}

	_putchar('\n');
}
