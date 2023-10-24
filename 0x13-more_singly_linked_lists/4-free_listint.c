#include "lists.h"
/**
 * free_listint - free the SLL
 * @head: a ptr
 */
void free_listint(listint_t *head)
{
listint_t *current;
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
