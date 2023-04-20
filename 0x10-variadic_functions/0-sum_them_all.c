#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 *
 * @n: constant integer
 *
 * Return: result of all arguments summed together
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list t;
	unsigned int s, result = 0;

	va_start(t, n);

	if (n == 0)
		return (0);
	for (s = 0; s < n; s++)
	{
		result += va_arg(t, unsigned int);
	}
	va_end(t);
	return (result);
}
