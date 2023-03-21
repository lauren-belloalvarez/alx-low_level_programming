#include <stdio>

/**
 * main - function prints alphabet in lowercase ecluding letters q and e
 *
 * Return: will be 0 for succesfull outcome
 *
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
