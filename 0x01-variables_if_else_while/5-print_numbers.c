#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers 0-9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}

	printf("\n");
	return (0);
}
