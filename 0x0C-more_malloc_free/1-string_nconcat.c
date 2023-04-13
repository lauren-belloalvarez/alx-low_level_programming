#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: input string one
 * @s2: input string two
 * @n: bytes
 *
 * Return: failure will return NULL, success will return concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c, d;

	if (s1 == NULL)
		b = 0;
	if (s2 == NULL)
		c = 0;
	else
	{
		for (b = 0; s1[b]; b++)
			;
		for (c = 0; s2[c]; c++)
			;
	}
	if (c > n)
		c = n;
	a = malloc((b + c + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (d = 0; d < b; d++)
		a[d] = s1[d];
	for (d = 0; d < c; d++)
		a[d + b] = s2[d];
	a[b + c] = '\0';
	return (a);
}

