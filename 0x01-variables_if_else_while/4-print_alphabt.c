#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet without q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 97;

	while (count <= 122)
	{
		if (count != 101 && count != 113)

		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
