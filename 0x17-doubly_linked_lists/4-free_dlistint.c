#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
current = head;
if (current == NULL)
{
return;
}
while (current->next != NULL)
{
current = current->next;
free(current->prev);
}
free(current);
}
