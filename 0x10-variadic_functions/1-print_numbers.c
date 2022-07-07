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
	unsigned int count, num;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		num = va_arg(ap, unsigned int);
		if (seperator == NULL)
		{
			if (count == n - 1)
				printf("%u\n", num);
			else
				printf("%u", num);
		}
		else
		{
			if (count == n - 1)
				printf("%u\n", num);
			else
				printf("%u%s", num, seperator);
		}
	}

	va_end(ap);
}
