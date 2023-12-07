#include "lists.h"
/**
 * print_dlistint - prints all the members of a double linked list
 * @h: fp
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
const dlistint_t *current;
current = h;
i = 0;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
++i;
}
return (i);
}
