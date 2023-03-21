#include <stdio.h>

/**
 * main - prints alphabet in lower case and upper case
 *
 * Return: will be 0 for succesfull outcome 
 *
 */

int main(void)
{ 
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
