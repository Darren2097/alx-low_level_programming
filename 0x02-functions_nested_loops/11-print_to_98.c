#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: n is an ASCII character
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			_putchar(n + '0');

			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}

			n++;
		}
	else
	{
		if (n > 98)
		{
		while (n != 98)
		{
			_putchar(n + '0');

			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}

			n++;
		}
		else
		{
		_putchar(n);
		_putchar('\n');
		}
		}
	
	}
	}
}
