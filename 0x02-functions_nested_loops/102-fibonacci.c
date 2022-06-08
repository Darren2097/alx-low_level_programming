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
	long int a, b, sum;
	int count;

	a = 0;
	b = 1;
	sum = 0;
	count = 0;

	while (count < 49)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;
		count++;
	}

	printf("%li\n", sum);
	return (0);
}
