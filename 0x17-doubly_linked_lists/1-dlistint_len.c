#include "lists.h"
/**
<<<<<<< HEAD
* dlistint_len - prints all the elements of the list.
* @h: pointer
* Return: The elements' number of the list
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