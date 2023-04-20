#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 *
 * @separator: string to be printed inbetween numbers
 * @n: number of integers passed to function
 *
 * Return: printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	if (separator == NULL)
	{
		for (b = 0; b < n; b++)
			printf("%d", va_arg(a, int));
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			printf("%d", va_arg(a, int));
			if (b != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(a);
}
