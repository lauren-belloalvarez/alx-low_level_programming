#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: bytes of allocatedd space for ptr
 * @new_size: new block of memory
 *
 * Return: pointer to new memory for success, on failure NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int c, b = new_size;
	char *prevpointer = ptr;

	a = malloc(new_size);
	b = old_size;
	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		return (a);
	else if (new_size == 0)
		return (NULL);
	else if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (c = 0; c < b; c++)
		a[c] = prevpointer[c];
	free(ptr);
	return (a);
}
