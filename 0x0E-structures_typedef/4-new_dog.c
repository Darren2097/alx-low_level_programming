#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cpy - copies the string
 * @str: string  variable
 *
 * Return: returns a pointer
 */

char *cpy(char *str)
{
	int count, length;
	char *s;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	s = malloc(length * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (count = 0; count < length; count++)
	{
		s[count] = str[count];
	}
	s[count] = '\0';

	return (s);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 *
 * Return: returns new dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *dogname, *dogowner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	dogname = cpy(name);
	dogowner = cpy(owner);

	newdog->name = dogname;
	newdog->age = age;
	newdog->owner = dogowner;
	return (newdog);
}
