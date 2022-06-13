#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: integer value
 * @b: integer value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
