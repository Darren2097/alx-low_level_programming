#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in a string
 * @s: string variable
 * @c: char variable
 *
 * return: returns a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
