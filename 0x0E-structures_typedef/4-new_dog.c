#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Entry point
 * @name: name
 * @age: age
 * @owner: owner
 * Description: function that creates a new dog.
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
