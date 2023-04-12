#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two input strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string if succesfull or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *c;

	a = b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s1[a] != '\0')
		a++;
	if (s2 == NULL)
		s2 = "";
	if (s2[b] != '\0')
		b++;
	c = malloc(sizeof(char) * (a + b + 1));
	if (c == NULL)
		return ("NULL");
	a = b = 0;
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		c[a] = s2[b];
		a++;
		b++;
	}
	c[a] = '\0';
	return (c);
}
