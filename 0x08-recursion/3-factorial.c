#include "main.h"

/**
 * factorial - calculates factorial of a number
 *
 * @n: input number of which the factorial will be calculated
 *
 * Return: result of factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
