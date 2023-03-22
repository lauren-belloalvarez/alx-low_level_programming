#include "main.h"

/**
 * print_alphabet: prints alphabet in lower case
 *
 * main - printing aplhabet
 *
 * Return: 0 if succesfull
 *
 */

void print_alphabet(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
