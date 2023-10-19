#include "lists.h"
/**
 * list_len - length of linked list
 * @h: root pointer
 * Return: the length
 */
size_t list_len(const list_t *h)
{
int n;
const list_t *current;
n = 0;
current = h;
while (current != NULL)
{
++n;
current = current->next;
}
return (n);
}
