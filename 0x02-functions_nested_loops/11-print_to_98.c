#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: integer value
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(',');
				printf(' ');
			}

			n++;
		}
	}
	else if (n > 98)
		{
		while (n != 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(',');
				printf(' ');
			}

			n--;
		}
		}
		else
		{
			printf("%d", n);
			printf('\n');
		}
}
