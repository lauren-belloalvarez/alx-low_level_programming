#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out all arguments
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a, b = 0;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
		b = b + atoi(argv[a]);
	}
	return (0);
}
