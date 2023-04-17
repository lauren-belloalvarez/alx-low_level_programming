#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - will free dogs
 *
 * @d: dog to be freed
 *
 * Return: 0 for success
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
