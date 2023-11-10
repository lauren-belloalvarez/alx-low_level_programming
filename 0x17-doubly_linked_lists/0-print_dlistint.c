#include "lists.h"

/**
 * print_dlistint - prints contents of dlistint_t
 *
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (n);
}
