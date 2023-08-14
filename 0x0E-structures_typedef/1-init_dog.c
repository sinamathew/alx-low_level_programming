#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * By: Sina Mathew
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
