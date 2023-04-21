#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return place index if true or -1 if false
 *
 * @array: array
 * @size: element size
 * @cmp: pointer to one function in main
 *
 * Return: 0 for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
