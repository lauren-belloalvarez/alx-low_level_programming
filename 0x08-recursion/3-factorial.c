#include "main.h"
/*
 * factorial - will return factorial of a given number
 *
 * @n: input number
 *
 * Return: -1 for error or 0 for succesfull trial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	       n = n * factorial(n - 1);
	return (n);
}
