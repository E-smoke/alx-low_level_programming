#include "lists.h"
/**
 * delete_nodeint_at_index - funct
 * @head: ptr
 * @index: index
 * Return: number
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int c;
unsigned int i;
listint_t *current;
listint_t *tofree;
listint_t *h;
if (head == NULL)
{
return (-1);
}
if (*head == NULL)
{
return (-1);
}
current = *head;
h = *head;
c = 0;
while (current != NULL)
{
current = current->next;
++c;
}
if (index >= c)
{
return (-1);
}
for (i = 0; i < index; ++i)
{
h = h->next;
}
tofree = h;
current = h->next;
h = *head;
for (i = 0; i < (index - 1); ++i)
{
h = h->next;
}
h->next = current;
free(tofree);
return (1);
}
