#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour1, hour2, min1, min2, max;

	hour1 = 48;
	max = 58;

	while (hour1 < 51)
	{
		if (hour1 == 50)
		{
			max = 52;
		}
		hour2 = 48;

		while (hour2 < max)
		{
			min1 = 48;

			while (min1 < 54)
			{
				min2 = 48;

				while (min2 < 58)
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(58);
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
					min2++;
				}
				min1++;
			}
			hour2++;
		}
		hour1++;
	}
}
