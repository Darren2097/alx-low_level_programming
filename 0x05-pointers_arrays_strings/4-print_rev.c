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
	_putchar(strrev(s));
	_putchar('\n');
}
