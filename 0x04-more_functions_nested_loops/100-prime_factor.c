#include <stdio.h>

/**
 * main - Prints the highest prime number of 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int num, div;

	num = 612852475143;
	div = 2;

	while (num != div)
	{
		if (num % div == 0)
		{
			num = num / div;
		}
		else
		{
			div++;
		}
	}
	printf("%li\n", num);
	return (0);
}
