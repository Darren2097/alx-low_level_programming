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

	strcpy(dogname, name);
	strcpy(dogowner, owner);

	newdog->name = dogname;
	newdog->age = age;
	newdog->owner = dogowner;
	return (newdog);
}
