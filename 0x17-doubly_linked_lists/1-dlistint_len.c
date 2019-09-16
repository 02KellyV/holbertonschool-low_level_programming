#include "lists.h"
/**
 * dlistint_len - number of elements for a list.
 * @h: a node pointer type dlistint_t
 * Return: a size_t number.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
