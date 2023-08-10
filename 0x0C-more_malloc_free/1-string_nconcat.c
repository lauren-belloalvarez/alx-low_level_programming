#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes from s2 to s1
 *
 * Return:pointer to allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int x = 0, y = 0, sl1 = 0, sl2 = 0;

	while (s1 && s1[sl1])
		sl1++;

	while (s2 && s2[sl2])
		sl2++;

	if (n < sl2)
		concat = malloc(sizeof(char) * (sl1 + n + 1));
	else
		concat = malloc(sizeof(char) * (sl1 = sl2 = 1));

	if (!concat)
		return (NULL);

	while (x < sl1)
	{
		concat[x] = s1[x];
		x++;
	}
	while (n < sl2 && x < (sl1 + n))
	{
		concat[x++] = s2[y++];
	}
	while (n >= sl2 && x < (sl1 + sl2))
	{
		concat[x++] = s2[y++];
	}
	concat[x] = '\0';
	return (concat);

}
