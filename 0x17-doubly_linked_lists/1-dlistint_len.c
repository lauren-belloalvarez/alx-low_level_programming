#include "lists.h"

/**
 * dlistint_len - returns number of elements in list
 *
 * @h: head of list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
