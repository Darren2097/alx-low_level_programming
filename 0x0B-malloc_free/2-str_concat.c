#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string variable 1
 * @s2: string variable 2
 *
 * Return: returns the the result of the two strings, else NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int count, length1, length2, lengthtot;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (*(s1 + length1) != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (*(s2 + length2) != '\0')
	{
		length2++;
	}
	lengthtot = length1 + length2;

	ar = (char *) malloc(lengthtot * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (count = 0; count < length1; count++)
	{
		*(ar + count) = s1[count];
	}
	for (count = 0; count < length2; count++)
	{
		ar[count + length1] = s2[count];
	}
	return (ar);
}
