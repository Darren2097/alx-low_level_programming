#include "main.h"
#include <string.h>

/**
 * *_strstr - locates a substring
 * @haystack: string variable
 * @needle: string variable
 *
 * Return: returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
