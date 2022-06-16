#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: string variable
 * @src: string variable
 * @n: n is an integer
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
