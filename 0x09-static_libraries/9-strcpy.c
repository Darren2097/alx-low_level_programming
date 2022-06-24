#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string in src to dest
 * @dest: pointer
 * @src: pointer
 *
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
