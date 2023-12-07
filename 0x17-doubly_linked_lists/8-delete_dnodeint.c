#include "lists.h"
/**
 * delete_dnodeint_at_index - delete at index
 * @head: 1p
 * @index: 2p
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *current;
current = *head;
i = 0;
if (index == 0)
{
if (current == NULL)
{
return (-1);
}
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}
while (current != NULL)
{
if (i == index)
{
if (current->next != NULL)
{
current->next->prev = current->prev;
}
if (current->prev != NULL)
{
current->prev->next = current->next;
}
free(current);
return (1);
}
current = current->next;
++i;
}
return (-1);
}
