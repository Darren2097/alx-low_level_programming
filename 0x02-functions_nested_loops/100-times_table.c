#include "main.h"

/**
 * print_times_table - prints the n time table
 * @n: n is an integer
 *
 * Return: void
 */

void print_times_table(int n)
{
	int r, c, result, i, j, h;

	r = 0;

	if (n > 0 && n < 16)
	{
		while (n >= r)
		{
			c = 0;
			while (n >= c)
			{
				result = r * c;
				i = result / 10;
				j = result % 10;
				h = result / 100;
				
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
		}
	}
}
