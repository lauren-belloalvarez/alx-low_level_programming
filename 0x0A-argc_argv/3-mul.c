#include "main.h"

/**
 * atoi - converts string to integers
 *
 * @s: input string that will be converted
 *
 * Return: interger
 */

int atoi(char *s)
{
	int a, b, c, length, d, num;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	d = 0;
	num = 0;

	while (s[length] != '\0')
		length++;
	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - prints multiplication of two numbers
 *
 * @argc: counts number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if succesfull
 */

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
		return (1);
}
