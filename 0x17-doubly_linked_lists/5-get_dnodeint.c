#include "lists.h"
/**
 * get_dnodeint_at_index - get node at an index
 * @head: head
 * @index: index og target node
 * Return: ptr to the target node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int i;
dlistint_t *current;
current = head;
i = 0;
while (current != NULL)
{
if (i == index)
{
return (current);
}
current = current->next;
++i;
}
return (NULL);
}
