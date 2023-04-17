#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dogs identification info
 * @name: first input
 * @age: second input
 * @owner: third input
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog2 - typedef struct dog
 */
typedef struct dog dog2;
#endif
