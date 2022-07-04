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
	char *dogname, *dogowner;

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

	newdog->name = dogname;
	newdog->age = age;
	newdog->owner = dogowner;

	return (newdog);
}
