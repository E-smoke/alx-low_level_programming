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
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
}
