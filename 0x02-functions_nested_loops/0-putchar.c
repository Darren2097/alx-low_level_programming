#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[8] = "_putchar";
	int count = 0;

	while (count < 8)
	{
		_putchar(c[count]);
		count++;
	}

	_putchar('\n');
	return (0);
}
