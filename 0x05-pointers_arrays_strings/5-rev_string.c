#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: string variable
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count, len, temp;

	len = strlen(s);

	for (count = 0; count < len / 2; count++)
	{
		temp = s[count];
		s[count] = s[len - 1 - count];
		s[len - 1 - count] = temp;
	}
}
