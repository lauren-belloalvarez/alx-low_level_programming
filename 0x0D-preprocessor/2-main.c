#include <stdio.h>
#include <unistd.h>

/**
 * main - print name of file compiled from
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
