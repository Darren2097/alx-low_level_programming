#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @str: string variable
 *
 * Return: returns string
 */

char *leet(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] == 'a' || str[count] == 'A')
			str[count] = '4';
		else if (str[count] == 'e' || str[count] == 'E')
			str[count] = '3';
		else if (str[count] == 'o' || str[count] == 'O')
			str[count] = '0';
		else if (str[count] == 't' || str[count] == 'T')
			str[count] = '7';
		else if (str[count] == 'l' || str[count] == 'L')
			str[count] = '1';
	}
	return (str);
}
