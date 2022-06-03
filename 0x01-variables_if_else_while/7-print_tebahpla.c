#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet backwards
 *
 * Return: 0 (success)
 */

int main(void)
{
	int count = 122;

	while (count >= 97)
	{
		char letter = count;

		putchar(letter);
		count--;
	}

	putchar('\n');
	return (0);
}
