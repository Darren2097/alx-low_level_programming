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
	unsigned long long int a, b, sum;i
	int count;

	a = 0;
	b = 1;
	sum = 0;
	count = 0;

	while (count < 98)
	{
		sum = a + b;
		printf("%llu, ", sum);
		a = b;
		b = sum;
		count++;
	}

	printf("%llu\n", sum);
	return (0);
}
