#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - array_iterator - array elements printed on new line
 *
 * @array: array
 * @size: number of elements to be printed
 * @action: pointer
 *
 * Return: 0 for success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || array == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
