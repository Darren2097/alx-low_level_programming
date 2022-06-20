#include "main.h"
#include <string.h>

/**
 * *_memset - Fills memory with a constant byte
 * @s: char variable
 * @b: char variable
 * @n: n is an unsigned integer
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
