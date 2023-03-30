#include "main.h"
/**
 * reverse_array - will print integers in array in a reverse order
 * @a: function parameter
 * @n: number of elements in array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
