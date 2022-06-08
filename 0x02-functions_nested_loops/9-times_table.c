#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int r, c, result, i, j;

	count = 0;
	r = 0;

	while (r < 10)
	{
		c = 0;

		while (c < 10)
		{
			result = r * c;
			i = result / 10;
			j = result % 10;

			if (c == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i + '0');
				_putchar(j + '0');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
