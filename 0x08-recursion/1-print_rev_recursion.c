#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: parameter
 *
 * Return: 0 if successfull in printing string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else 
		_putchar('\n');
}