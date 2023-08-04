#include "main.h"
/**
 * _strncat - concatentates with n bytes from source
 * @dest: destination string
 * @src: source string
 * @n: amount of characters to be appended
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
