#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates input arguments
 *
 * @ac: input
 * @av: array
 *
 * Return: 0 if successfull
 */

char *argstostr(int ac, char **av)
{
	char *v;
	int w, x, y = 0, z = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
		for (x = 0; av[w][x]; x++)
			z++;
	z = z + ac;
	v = malloc(sizeof(char) * z + 1);
	for (w = 0; w < ac; w++)
	{	v[y] = av[x][w];
		y++;
	}
	if (v[y] == '\0')
		v[y++] = '\n';
	return (v);
}
