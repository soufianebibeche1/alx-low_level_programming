#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 * @d: a dog to inistialliz
 * @name: name
 * @age: age
 * @owner: owner
 * Description: a function to inisiallize
 * a dog with the parameters
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
