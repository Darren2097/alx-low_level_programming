#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 48;

	while (first < 58)
	{
		int second = 48;

		while (second < 58)
		{
			fifth = second + 1;
			int fourth = first;

			while (fourth < 58)
			{
				int fifth = 48;

				while (fifth < 58)
				{
					putchar(first);
					putchar(second);
					putchar(32);
					putchar(fourth);
					putchar(fifth);

					if (first < 57 || second < 56 || fourth < 57 || fifth < 57)
					{
						putchar(44);
						putchar(32);
					}
					fifth++;
				}
				fourth++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
