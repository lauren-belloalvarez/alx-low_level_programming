#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out new function name
 *
 * @argc: count (not needed)
 * @argv: new assigned function name
 *
 * Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
