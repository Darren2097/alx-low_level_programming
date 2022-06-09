#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, first, second;

	i = 0;
	while (i <= 10)
	{
		first = '0';
		while (first < '2')
		{
			second = '0';
			while (first < '2' && second <= '5')
			{
				_putchar(second);
				second++;
			}
			_putchar(first);
			first++;
		}
		_putchar('\n');
		i++;
	}
}
