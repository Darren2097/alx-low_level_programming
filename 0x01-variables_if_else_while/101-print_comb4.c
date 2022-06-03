#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all different combinations of three digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first = 48;
	int second = 48;
	int third = 48;

	while (first < 58)
	{
		second = first + 1;

		while (second < 58)
		{
			third = second + 1;

			while (third < 58)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first < 55 || second < 56 || third < 57)
				{
					putchar(44);
					putchar(32);
				}
				third++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
