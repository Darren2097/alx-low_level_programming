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
	long double a, b, sum;
	int count;

	a = 0;
	b = 1;
	sum = 0;
	count = 0;

	while (count < 98)
	{
		sum = a + b;
		printf("%Lf, ", sum);
		a = b;
		b = sum;
		count++;
	}

	printf("%Lf\n", sum);
	return (0);
}
