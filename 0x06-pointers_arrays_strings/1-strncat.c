#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: string variable
 * @src: string variable
 * @n: n is an integer
 *
 * Return: returns a pointer to the resukting string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src));
}
