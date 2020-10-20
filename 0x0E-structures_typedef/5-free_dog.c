#include "dog.h"
/**
 * free_dog - Frees a newly added dog.
 * @d: Newly added dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
