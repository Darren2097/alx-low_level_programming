#include "main.h"

/**
 * is_prime_number - calculates whether or not a number is a prime number
 * @n: n is an integer
 *
 * Return: returns 1 if number is prime and 0 if number is not
 */

int is_prime_number(int n)
{
	if (n > 0)
	{
		if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else if (n <= 0)
	{
		return (0);
	}
}
