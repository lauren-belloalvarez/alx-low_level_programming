#include "dog.h"

/**
 * init_dog - variable initialization of struct dog
 *
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of particular dog
 *
 * Return: 0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		d = malloc(sizeof(struct dog));
}
