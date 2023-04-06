#include "main.h"
/**
 * _pow_recursion - will return the value of x^y
 *
 * @x: input integer
 * @y: input integer
 *
 * Return: 0 for succesful trial and value of power
 */

int _pow_recursion(int x, int y)
{
	int a;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		a = x *  _pow_recursion(x, y - 1);
	return (a);
}
