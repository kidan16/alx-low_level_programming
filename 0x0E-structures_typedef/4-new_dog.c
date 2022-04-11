#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner:owner of dog
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
