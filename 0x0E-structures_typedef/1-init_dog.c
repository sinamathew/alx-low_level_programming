#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * By: Sina Mathew
 * @d: C isn't fun
 * @name: C isn't fun
 * @age: C isn't fun
 * @owner: C isn't fun
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
