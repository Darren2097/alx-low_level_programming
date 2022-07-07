#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all numbers
 * @n: unsigned integers
 *
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int count, result;

	if (n == 0)
	{
		return (0);
	}

	va_start (ap, n);

	result = 0;
	for (count = 0; count < n; count++)
	{
		result += va_arg (ap, n);
	}

	va_end (ap);

	return (result);
}
