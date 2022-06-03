#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 48;
	int second = 48;

	while (first < 58)
	{
		second = first + 1;

		while (second < 58)
		{
			putchar(first + '0');
			putchar(second + '0');

		while (first != 56 && second != 57)
		{
			putchar(44);
			putchar(32);
		}
		second++;
		}

		first++;
	}

	putchar('\n');
	return (0);
}
