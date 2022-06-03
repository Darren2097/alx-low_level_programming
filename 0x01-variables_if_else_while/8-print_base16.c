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

	while (count <= 48)
	{
		if (count < 10)
			putchar(count + '0');
		else
			if (count > 41)
			putchar(count + 'a');

		count++;
	}

	putchar('\n');
	return (0);
}
