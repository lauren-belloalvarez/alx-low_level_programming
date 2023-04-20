#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: char between strings
 * @n: number of strings
 *
 * Return: strings printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	if (separator == NULL)
	{
		for (b = 0; b < n; b++)
		{
			if (a == NULL)
				printf("(nil)");
			printf("%s", va_arg(a, char*));
		}
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			if (a == NULL)
				printf("(nil)");
			printf("%s", va_arg(a, char*));
			if (b != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(a);
}
