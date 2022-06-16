#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @str: string variable
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int count, prev;

	for (count = 0; str[count] == '\0'; count++)
	{
		prev = count - 1;

		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (count == 0)
				str[count] = str[count] - 32;
			else if (str[prev] >= 32 && str[prev] <= 34)
				str[count] = str[count] - 32;
			else if (str[prev] >= 40 && str[prev] <= 41)
				str[count] = str[count] - 32;
			else if (str[prev] == 44)
				str[count] = str[count] - 32;
			else if (str[prev] == 46)
				str[count] = str[count] - 32;
			else if (str[prev] == 59)
				str[count] = str[count] - 32;
			else if (str[prev] == 63)
				str[count] = str[count] - 32;
			else if (str[prev] == 123 || str[prev] == 125)
				str[count] = str[count] - 32;
			else if (str[prev] == '	' || str[prev] == '\n')
				str[count] = str[count] - 32;
		}

	}
	return (str);
}
