#include "main.h"

/**
 * main - prints all arguments passed
 *
 * @argc: counts arguments
 * @argv: array of arguments
 *
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
