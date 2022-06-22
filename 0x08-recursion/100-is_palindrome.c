#include "main.h"

/**
 * is_palindrome - determines if string is a palindrome or not
 * @s: string variable
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int _is_palindrome(char *s)
{
	char rev;

	if (*s != '\0')
	{
		_is_palindrome((s + 1));
		rev = *s;
	}

	if (rev == *s)
	{
		return (1);
	}
	else
		return (0);
}
