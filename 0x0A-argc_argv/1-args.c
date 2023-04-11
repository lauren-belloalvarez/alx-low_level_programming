#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of attributes
 *
 * @argc: number of arguments
 * @argv: attibutes (unused)
 *
 * Return: 0 if succesful
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
