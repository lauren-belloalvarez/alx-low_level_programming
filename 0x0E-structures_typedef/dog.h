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
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new type name for struct
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
