#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 97;

	while (count <= 122)
	{
		char letter = count;

		putchar(letter);
		count++;
	}
	return (0);
}
