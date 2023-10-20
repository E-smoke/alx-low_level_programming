#include "lists.h"
/**
 * free_list - free
 * @head: a ptr
 */
void free_list(list_t *head)
{
list_t *current;
current = head;
if (head == NULL)
{
return;
}
else
{
while(current != head)
{
current = head;
while (current->next != NULL)
{
current = current->next;
}
if (current == head)
{
break;
}
free(current);
current = NULL;
}
free(current);
}
}
