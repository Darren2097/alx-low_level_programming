#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to print of second string
 *
 * Return: returns the concatenated string, else return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, count1, count2;
	char *totstr;

	length1 = 0;
	length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + length1) != '\0')
		length1++;
	while (*(s2 + length2) != '\0')
		length2++;
	if (n < length2)
	{
		length2 = n;
	}
	totstr = malloc(length1 + length2 + 1);
	if (totstr == NULL)
	{
		return (NULL);
	}
	for (count1 = 0; count1 < length1; count1++)
	{
		totstr[count1] = s1[count1];
	}
	for (count2 = 0; count2 < length2; count2++)
	{
		totstr[count1 + count2] = s2[count2];
	}
	totstr[count1 + count2] = '\0';
	return (totstr);
}
