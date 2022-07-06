#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the difference between integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the two integers multiplied
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the two integers divided
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - gets the remainder of the division
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
