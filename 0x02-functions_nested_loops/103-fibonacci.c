#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of the even terms in the fibonacci sequence
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a, b, sum, totsum;

	a = 0;
	b = 1;
	sum = 0;
	totsum = 0;

	while (sum < 4000000)
	{
		sum = a + b;

		if (sum % 2 == 0)
		{
			totsum += sum;
		}

		a = b;
		b = sum;
	}

	printf("%li\n", totsum);
	return (0);
}
