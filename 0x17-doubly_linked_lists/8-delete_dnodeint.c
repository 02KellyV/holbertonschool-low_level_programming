#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node in a index especific
 * @head: a node double pointer type dlistint_t
 * @index: index for new node
 * Return: 1 success or -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *tmp = *head;
        unsigned int i = 0;

        if (head == NULL || *head == NULL)
                return (-1);
        if (index == 0)
        {
                *head = tmp->next;
                if (*head != NULL)
                {
                        (*head)->prev = NULL;
                }
                free(tmp);
                return (1);
        }

        while (i < index)
        {
                if (tmp == NULL)
                        return (-1);
                tmp = tmp->next;
                i++;
        }
        tmp->prev->next = tmp->next;
        if (tmp->next != NULL)
                tmp->next->prev = tmp->prev;
        free(tmp);
        return (1);
}
