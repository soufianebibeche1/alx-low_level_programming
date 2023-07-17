#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * @d: a dog to print
 * Description: function that prints a struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
