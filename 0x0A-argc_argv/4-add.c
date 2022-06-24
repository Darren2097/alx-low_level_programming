#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_int - checks if argument is an integer
 * @str: string variable
 *
 * Return: returns 1 if the argument is a number and 0 if it isn't
 */

int check_int(char *str)
{
	int count;

	count = 0;

	while (*(str + count) != '\0')
	{
		if (*(str + count) >= '0' && *(str + count) <= '9')
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: returns 0 if all arguments are numbers, else returns 1 if one
 * argument is not a number
 */

int main(int argc, char *argv[])
{
	int i, result;
	char arg;

	i = 1;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			arg = check_int(argv[i]);
			if (arg == 1)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
			}
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
