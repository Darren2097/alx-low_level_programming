#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string variable
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	s = strrev(s);
	_putchar(s);
}
