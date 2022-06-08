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
	int num, sum;

	sum = 0;
	num = 0;

	while (sum < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
			num++;
		}
	}

	printf("%d\n", sum);
	return (0);
}
