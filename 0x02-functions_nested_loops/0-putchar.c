#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[9] = "_putchar";
	int count = 0;

	while (count < 8)
	{
		putchar(c[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
