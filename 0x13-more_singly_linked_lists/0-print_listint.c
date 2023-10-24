#include "lists.h"
/**
 * print_listint - prints the elements of an integer
 * @h: a pointer to the roo
 * Return: returns an integer
 */
size_t print_listint(const listint_t *h)
{
int c;
const listint_t *current;
current = h;
c = 0;
if (current == NULL)
{
return (c);
}
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
++c;
}
return (c);
}
