#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all numbers of base 16
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 0;

	while (count <= 70)
	{
		if (count < 10)
			putchar(count + '0');
		else
			if (count > 64)
			putchar(count + 'A');

		count++;
	}

	putchar('\n');
	return (0);
}
