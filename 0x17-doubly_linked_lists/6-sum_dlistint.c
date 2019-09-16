#include "lists.h"

/**
 * sum_dlistint - sum info's nodes doubly linked list
 * @head: a node double pointer type dlistint_t
 * Return: sum int value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
