#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - variable of type struct dog initialized
 * 
 * @d: pointer to struct to initialize
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->owner = owner;
	d->age = age;
	d->name = name;
}
