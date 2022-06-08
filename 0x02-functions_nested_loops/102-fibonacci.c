#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b, count, sum;

	a = 1;
	b = 2;
	sum = 0;
	count = 0;

	while (count <= 50)
	{
		sum = a + b;
		printf("%d, ", sum);
		a = b;
		b = sum;
		count++;
	}

	printf("%d\n", sum);
	return (0);
}
