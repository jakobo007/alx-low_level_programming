#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 *
 * Author: Silas Mugambi
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

