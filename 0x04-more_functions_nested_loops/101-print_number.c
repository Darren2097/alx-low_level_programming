#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
