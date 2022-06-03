#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: ptints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count1 = 97;
	int count2 = 65;

	while (count1 <= 122)
	{
		char lower = count1;

		putchar(lower);
		count1++;
	}
	while (count2 <= 90)
	{
		char upper = count2;

		putchar(upper);
		count2++;
	}
	putchar('\n');
	return (0);
}
