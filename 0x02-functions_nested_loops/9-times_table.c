#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, count, result;

	count = 0;

	while (count < 10)
	{
		i = 0;

		while (i < 10)
		{
			j = 0;

			while (j < 10)
			{
				result = i * j;
				_putchar(result + '0');
				_putchar(',');
				_putchar(32);
				j++;
			}
			i++;
		}
		i++;
	}
	_putchar('\n');
	count++;
}
