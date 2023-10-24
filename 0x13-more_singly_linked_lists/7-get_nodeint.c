#include "lists.h"
/**
 * get_nodeint_at_index - get node function
 * @head: ptr to the head
 * @index: the index
 * Return: a ptr to the indexed struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c;
unsigned int i;
listint_t *current;
if (head == NULL)
{
return (NULL);
}
current = head;
c = 0;
while (current != NULL)
{
current = current->next;
++c;
}
if (index >= c)
{
return (NULL);
}
for (i = 0; i < index; ++i)
{
head = head->next;
}
return (head);
}
