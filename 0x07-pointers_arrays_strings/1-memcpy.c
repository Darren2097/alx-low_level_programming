#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: char variable
 * @src: char variable
 * @n: n is an unsigned integer
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
