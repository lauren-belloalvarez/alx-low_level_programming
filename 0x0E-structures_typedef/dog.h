#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/*
 * struct dog - has name, age and owner of a particular dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: basic details of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
newtypedog;

#endif
