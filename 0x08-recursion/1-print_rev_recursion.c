#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: input string to be reversed and printed
 *
 * Return: 0 if succesful
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
