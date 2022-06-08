#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: n is an integer value
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;

			if (n == 98)
			{
				printf("98\n");
			}
		}
	}
	else if (n > 98)
		{

		while (n > 97)
		{
			printf("%d, ", n);
			n--;

			if (n == 98)
			{
				printf("98\n");
			}
		}

		}
		else
		{
			printf("98\n");
		}
}
