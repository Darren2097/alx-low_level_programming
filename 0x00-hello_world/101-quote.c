#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints to the standard error
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 60);
	return (1);
}
