#include "main.h"

/**
 * print_number - prints an integer
 * @n: n is an integer
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n + '0');
		_putchar('\n');
	}
	else
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
