#include "main.h"
/**
 * _strlen_recursion - will give length of the input string
 *
 * @s: parameter that is the string
 *
 * Return: will return 0 for succeesful trial
 */

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str = str + _strlen_recursion(s + 1);
	}
	return (str);
}
