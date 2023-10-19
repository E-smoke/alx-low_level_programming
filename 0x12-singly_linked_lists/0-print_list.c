#include "lists.h"
/**
 * print_list - prints the elements of a liked list
 * @h: root ptr
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int n;
const list_t *current;
n = 0;
for (current = h; current != NULL; current = current->next)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", current->len, current->str);
}
++n;
}
return (n);
}
