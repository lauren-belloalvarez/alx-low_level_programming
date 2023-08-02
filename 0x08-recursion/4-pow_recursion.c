#include "main.h"

/**
 * _pow_recursion - calculates powers of the arguments
 *
 * @x: input base value
 * @y: input power value
 *
 * Return: Result of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return(-1);
	}
	else if (y == 0)
	{
		return(1);
	}
	return(x * _pow_recursion(x, y-1));
}
