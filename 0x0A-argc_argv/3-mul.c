#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies arguments
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 successfull, 1 for error
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
		return (0);
	}
}
