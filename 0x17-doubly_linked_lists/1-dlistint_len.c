#include "lists.h"

/**
 * dlistint_len - number of elements for a list.
 * @h: a node pointer type dlistint_t
 * Return: a size_t number.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
