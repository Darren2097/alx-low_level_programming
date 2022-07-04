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
	/*int count, length;*/

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
	/**length = 0;
	while (*(dogname + length) != '\0')
	{
		length++;
	}
	dname = malloc(length * sizeof(char) + 1);
	if (dname == NULL)
		return (NULL);

	for (count = 0; count < length; count++)
	{
		*(dname + count) = *(dogname + count);
	}
*/
	newdog->name = dogname;
	newdog->age = age;
	newdog->owner = dogowner;
	return (newdog);
}
