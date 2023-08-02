#include "main.h"

/**
 * _strlen_recursion - finds the length of the strength
 *
 * @s: string of which length must be determined
 *
 * Return: integer, length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;
	if (*s)
	{
		length = length + 1;
		length += _strlen_recursion(s + 1);
	}
	return(length);
}
