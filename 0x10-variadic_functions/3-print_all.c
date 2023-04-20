#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints any variable type
 *
 * @format: list of argument types
 *
 * Return: printed arguments
 */

void print_all(const char * const format, ...)
{
	int n = 0;
	char *b, *c = "";

	va_list a;

	va_start(a, format);
	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'i':
					printf("%s%d", c, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", c, va_arg(a, double));
					break;
				case 's':
					b = va_arg(a, char*);
					if (b == NULL)
						b = "(nil)";
					printf("%s%s", c, b);
					break;
				case 'c':
					printf("%s%c", c, va_arg(a, int));
					break;
				default:
					n++;
					continue;
			}
			c = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(a);
}
