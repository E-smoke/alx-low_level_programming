#include "lists.h"
/**
 * print_listint_safe - funct
 * @head: ptr
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
int c;
const listint_t *current;
current = head;
c = 0;
if (current == NULL)
{
return (c);
}
while (current != NULL || current != head)
{
printf("%d\n", current->n);
current = current->next;
++c;
}
return (c);
}
