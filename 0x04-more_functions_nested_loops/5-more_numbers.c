#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, first, second;

	for (i = 0; i < 10; i++)
	{
		while (first < 2)
		{
			while (j <= second)
			{
				if (second == '4')
				{
					_putchar('1');
				}
				_putchar(j);
				j++;
			}
			first++;
			second = '4';
			j = '0';
		}
		_putchar('\n');
		first = 0;
		second = '9';
		j = '0';
	}
}
