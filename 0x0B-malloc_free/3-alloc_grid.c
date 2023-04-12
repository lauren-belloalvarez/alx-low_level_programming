#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to 2D array
 *
 * @width: grid wdith input
 * @height: grid height input
 *
 * Return: 2D array pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **c;

	c = malloc(sizeof(int *) * height);
	if (c == NULL)
	{
		return (NULL);
	}
	if (width <= 0)
		return (NULL);
	else if (height <= 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{	c[a] = malloc(sizeof(int) * width);
		if (c[a] == NULL)
			for (; a >= 0; a--)
			{	free(c[a]);
				free(c);
				return (NULL);
			}
		else
		{
			for (b = 0; b < width; b++)
				c[a][b] = 0;
		}
	}
	return (c);
}
