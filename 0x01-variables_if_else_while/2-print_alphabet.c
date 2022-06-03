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
	char count;

	count = 'a';

	while (count <= 'z')
	do {
		putchar("%c", count);
		count++;
	}
	return (0);
}
