#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int a, b, sum;
	int count;

	a = 0;
	b = 1;
	sum = 0;
	count = 0;

	while (count < 99)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
		count++;
	}

	printf("%lu\n", sum);
	return (0);
}
