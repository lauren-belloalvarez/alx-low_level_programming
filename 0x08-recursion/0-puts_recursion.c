#include "main.h"

/**
 * _puts_recursion - prints string followed by a new line
 *
 * @s: string that will be used as the input
 *
 * Return: 0 when printed successfully
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
