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
	char space = 32;
	char comma = 44;

	while (count < 10)
	{
		putchar(count + '0');
		putchar(comma);
		putchar(space);
		count++;
	}

	putchar('\n');
	return (0);
}
