#include <stdio.h>

/**
 * main - prints single digits of base 10
 *
 * Return: will be 0 for succesfull result
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
