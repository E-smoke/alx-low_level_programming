#include "lists.h"
/**
 * free_listint2 - free
 * @head: a ptr to a ptr
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
{
return;
}
if (*head == NULL)
{
head = NULL;
return;
}
else
{
current = *head;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
head = NULL;
}
