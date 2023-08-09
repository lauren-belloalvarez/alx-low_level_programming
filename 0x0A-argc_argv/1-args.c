#include "main.h"

/**
 * main - prints number of arguments passed
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
