#include "dog.h"

/**
 * print_dog - prints structure of dog
 *
 * @d: structure dog
 *
 * Return: 0 on success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)");
	if (d->age == 0)
		printf("(nil)");
	if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
