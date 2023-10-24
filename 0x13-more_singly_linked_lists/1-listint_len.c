#include "lists.h"
/**
 * listint_len - returns the number of elements in a SLL
 * @h: a ptr to the head
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
int c;
const listint_t *current;
if (h == NULL)
{
return (0);
}
c = 0;
current = h;
while (current != NULL)
{
++c;
current = current->next;
}
return (c);
}
