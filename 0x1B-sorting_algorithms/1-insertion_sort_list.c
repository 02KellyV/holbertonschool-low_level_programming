#include "sort.h"
/**
 * insertion_sort_list - insertion sort method
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i;

	if (!list || (*list)->next == NULL)
		return;

	i = (*list)->next;
	while (i)
	{

		while (i->prev != NULL && i->prev->n > i->n)
		{
			i->prev->next = i->next;
			if (i->next)
			{
				i->next->prev = i->prev;
			}
			i->next = i->prev;
			i->prev = i->prev->prev;
			i->next->prev = i;
			if (i->prev == NULL)
			{
				*list = i;
			} else
			{
				i->prev->next = i;
			}
			print_list(*list);
		}
		i = i->next;
	}
}