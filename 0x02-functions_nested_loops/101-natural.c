#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num3, num5, sum;

	sum = 0;
	num3 = 0;
	num5 = 0;

	while (sum < 1024)
	{
		if (num3 % 3 == 0)
		{
			sum = sum + num3;
		}
		else if (num5 % 5 == 0)
		{
			sum = sum + num5;
		}

		num3++;
		num5++;
	}

	printf("%d\n", sum);
	return (0);
}
