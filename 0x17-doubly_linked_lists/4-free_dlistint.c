#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: a node type dlistint_t
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
