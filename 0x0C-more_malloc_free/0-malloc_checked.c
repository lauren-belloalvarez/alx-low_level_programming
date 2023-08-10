#include "main.h"

/**
 * *malloc_checked - allocates memory
 *
 * @b : bytes
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);

	if (size == NULL)
	{
		exit(98);
	}
	return (size);
}
