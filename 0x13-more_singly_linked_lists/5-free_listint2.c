#include "lists.h"
/**
 * free_listint2 - free
 * @head: a ptr to a ptr
 */
void free_listint2(listint_t **head)
{
listint_t *current;
current = *head;
if (*head == NULL)
{
head = NULL;
return;
}
else
{
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
head = NULL;
}
