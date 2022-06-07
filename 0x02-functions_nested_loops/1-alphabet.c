#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */

int main(void)
{
	void print_alphabet(void);
	return (0);
}

void print_alphabet(void)
{
	int count = 97;

	while (count < 123)
	{
		char letter = count;

		putchar(letter);
		count++;
	}
	putchar('\n');
	return;
}
