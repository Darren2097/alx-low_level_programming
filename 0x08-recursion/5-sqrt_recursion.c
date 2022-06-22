#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: n is an integer
 *
 * Return: returns -1 if n does not have a natural root number, otherwise
 * it will return the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 2;
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (check_sqrt(n, i));
}

/**
 * check_sqrt - checks if number given is a perfect square and calculates
 * its square root
 * @num: num is an integer
 * @count: count is an integer
 *
 * Return: returns the square root or -1 if its not a perfect square
 */

int check_sqrt(int num, int count)
{
	if (count * count == num)
		return (count);
	else if (count < num)
		count++;
	else
		return (-1);
}
