#include "main.h"

/**
 * print_times_table - prints the n time table
 * @n: n is an integer
 *
 * Return: void
 */

void print_times_table(int n)
{
	int r, c, result;

	if (n > 0 && n < 16)
	{
		for (r = 0; n >= r; r++)
		{
			for (c = 0; n >= c; c++)
			{
				result = r * c;
				if (c == 0)
					_putchar('0');
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				else if (result > 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
					else if (result > 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((result / 100) + '0');
						_putchar(((result / 10) % 10) + '0');
						_putchar((result % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
}
