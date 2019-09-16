#include "lists.h"

/**
 * get_dnodeint_at_index - nth node double linked list
 * @head: a node pointer type dlistint_t
 * @index: index node
 * Return: address new node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
