#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - name, age and owner of a dog
 *
 * @name: name of dog and first member
 * @age: age of dog and second member
 * @owner: owner of the dog and third member
 *
 * Description: all the details of a particular dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
newtypedog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
