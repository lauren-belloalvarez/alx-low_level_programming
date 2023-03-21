#include <stdio.h>

/**
 * main - will print alphabet in reverse and in lower case
 *
 * Return: will be 0 if function is succesfull
 *
 */

int main(void)
{
	char i;
	
	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
