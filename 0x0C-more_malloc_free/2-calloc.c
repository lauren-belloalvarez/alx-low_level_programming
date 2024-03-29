#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array
 * @size: in bytes
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memory = malloc(size * nmemb);
	if (memory == NULL)
	{
		return (NULL);
	}
	_memset(memory, 0, nmemb * size);
	return (memory);
}

