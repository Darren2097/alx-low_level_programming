#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: string to be printed between strings
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}

		if (count == n - 1)
		{
			printf("%s\n", str);
		}
		else
		{
			if (seperator == NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("%s%s", str, seperator);
			}
		}
	}
	va_end(ap);
}
