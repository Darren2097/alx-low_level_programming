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

	while (count <= 8)
	{
		putchar(count + '0');
		putchar(44);
		putchar(32);
		count++;
	}
	putchar(count + '0');

	putchar('\n');
	return (0);
}
