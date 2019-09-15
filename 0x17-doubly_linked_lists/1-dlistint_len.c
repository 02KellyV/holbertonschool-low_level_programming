#include "lists.h"

/**
 * print_dlistint - number of elements for a list.
 * @h: a node pointer type dlistint_t
 * Return: a size_t number.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
