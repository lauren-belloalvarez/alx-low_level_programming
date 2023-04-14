#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 *
 * @min: minimum range
 * @max: max range
 *
 * Return: pointer to array on success or NULL on failure
 */

int *array_range(int min, int max)
{
	int *b;
	int a, c;

	a = max - min + 1;
	b = malloc(sizeof(int) * a);
	if (min > max || b == NULL)
		return (NULL);
	for (c = 0; min <= max; c++)
		b[c] = min++;
	return (b);
}
