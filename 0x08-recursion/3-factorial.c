#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: n is an integer
 *
 * Return: returns -1 if number is less than 0, otherwise it returns the
 * factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
