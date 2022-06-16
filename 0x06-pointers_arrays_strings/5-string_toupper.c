#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase letters
 * @str: string variable
 *
 * Return: returns the string
 */

char *string_toupper(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
	}
	return (str);
}
