#include "main.h"

/**
 * checker - checks if prime
 *
 * @n: number to be checked
 * @counter: keeps track of iterations
 *
 * Return: 1 if prime number, 0 if its not a prime number
 */

int checker(int n, int counter)
{
	if (n <= 1)
	{
		return (0);
	}
	if (counter == 1)
	{
		return (1);
	}
	else if (n % counter == 0 && counter > 0)
	{
		return (0);
	}
	return (checker(n, counter - 1));
}

/**
 * is_prime_number - checks for prime numbers
 *
 * @n: number to be checked
 *
 * Return: 1 if prime number, 0 if its not a prime number
 */

int is_prime_number(int n)
{
	return (checker(n, n - 1));
}
