#include "main.h"

/**
 * *rot13 - replaces the string letters with the letter 13 after that letter
 * @str: string variable
 *
 * Return: returns the result string
 */

char *rot13(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if ((str[count] >= 'a' && str[count] <= 'z') ||
				(str[count] >= 'A' && str[count] <= 'Z'))
		{
			str[count] = str[count] + 13;
		}
	}
	return (str);
}
