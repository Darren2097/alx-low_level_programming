#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 *
 * Return: returns a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *dogname, *dname, *dogowner;
	int count, length;

	length = 0;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	dogname = strdup(name);
	dogowner = strdup(owner);
	if (dogname == NULL || dogowner == NULL)
	{
		free(newdog);
		return (NULL);
	}

	while (*(dogname + length) != '\0')
	{
		length++;
	}
	dname = malloc(length * sizeof(char) + 1);
	for (count = 0; count < length; count++)
	{
		*(dname + count) = *(dogname + count);
	}

	newdog->name = dname;
	newdog->age = age;
	newdog->owner = dogowner;
	return (newdog);
}
