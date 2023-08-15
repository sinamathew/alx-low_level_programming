#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory used by a dog_t structure
 * By: Sina Mathew
 * @d: Pointer to the dog_t structure to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

