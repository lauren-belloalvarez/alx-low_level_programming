#include "main.h"
/**
 * _puts_recursion - prints the string followed by a new line
 *
 * @s: char parameter
 *
 * Return: is 0 if string followed by new line is printed
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
