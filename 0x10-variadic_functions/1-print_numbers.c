#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	if (seperator == NULL)
	{
		return;
	}

	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		printf("%u", va_arg(ap, unsigned int));
		printf("%s", seperator);
	}
	printf("\n");

	va_end(ap);
}
