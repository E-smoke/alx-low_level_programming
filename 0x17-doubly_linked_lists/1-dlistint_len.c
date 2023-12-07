#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a double linked list
 * @h: fp
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
const dlistint_t *current;
current = h;
i = 0;
while (current != NULL)
{
current = current->next;
++i;
}
return (i);
}
