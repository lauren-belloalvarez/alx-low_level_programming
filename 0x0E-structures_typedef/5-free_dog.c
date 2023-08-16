#include "dog.h"

/**
 * free_dog - memory for struct dog gets freed
 *
 * @d: struct dog that will be freed
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
