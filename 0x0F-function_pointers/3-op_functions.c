#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: remainder result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
