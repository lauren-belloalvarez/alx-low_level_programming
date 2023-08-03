#include "main.h"

/**
 * root - finds natural square root of number
 *
 * @n: input number
 * @counter: keeps track of iterations
 *
 * Return: square root result
 */

int root(int n, int counter)
{
	if (n < 0 || counter * counter > n)
	{
		return (-1);
	}
	else if (counter * counter == n)
	{
		return (counter);
	}
	return (root(n, counter + 1));
}

/**
 * _int_sqrt_recursion - calculates square root of number
 *
 * @n: input number
 *
 * Return: result of the squared root of n
 */

int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
