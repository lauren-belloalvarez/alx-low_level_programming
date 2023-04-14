#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory
 *
 * @nmemb: amount of memory for array
 * @size:
 *
 * Return: NULL on failure, array on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	x = malloc(size * nmemb);
	if (nmemb == 0 || size == 0 || x == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < (size * nmemb); y++)
		x[y] = 0;
	return (x);
}
