#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to memory that has copy of string
 *
 * @str: input char
 *
 * Return: 0 if successfull NULL if fails
 */

char *_strdup(char *str)
{
	int x, y = 0;
	char *z;

	x = 0;
	if (str == NULL)
		return ("NULL");
	while (str[x] != '\0')
	{
		x++;
		z = malloc(sizeof(char) * (x + 1));
		if (z == NULL)
			return ("NULL");
	}
	for (y = 0; str[y]; y++)
		z[y] = str[y];
	return (z);
}
