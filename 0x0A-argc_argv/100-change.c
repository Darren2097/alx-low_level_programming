#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calc_change - calculates number of coins
 * @num: number given
 *
 * Return: coins
 */

int calc_change(int num)
{
	int twenty_five, ten, five, two, one, coins;

	twenty_five = 0;
	ten = 0;
	five = 0;
	two = 0;
	one = 0;
	coins = 0;

	while (num > 0)
	{
		if (num >= 25)
		{
			num = num - 25;
			twenty_five++;
		}
		else if (num >= 10)
		{
			num = num - 10;
			ten++;
		}
		else if (num >= 5)
		{
			num = num - 5;
			five++;
		}
		else if (num >= 2)
		{
			num = num - 2;
			two++;
		}
		else if (num >= 1)
		{
			num = num - 1;
			one++;
		}
	}
	coins = twenty_five + ten + five + two + one;
	return (coins);
}

/**
 * main - prints the number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 1 if arguments passed is not exactly 1, else returns 0
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		cents = calc_change(atoi(argv[1]));
		printf("%d\n", cents);
		return (0);
	}
}
