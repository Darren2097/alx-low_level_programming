#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		putchar(count + '0');

		if (count != 9)
		{
			putchar(44);
			putchar(32);
		}
		count++;
	}

	putchar('\n');
	return (0);
}
