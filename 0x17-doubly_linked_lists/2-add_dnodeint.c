#include "lists.h"

/**
 * *add_dnodeint - adds node starting doubly linked list
 * @head: a node double pointer type dlistint_t
 * @n: info new node
 * Return: address new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
