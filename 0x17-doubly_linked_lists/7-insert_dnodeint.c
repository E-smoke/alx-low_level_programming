#include "lists.h"
/**
 * insert_dnodeint_at_index - insert
 * @h: fp
 * @idx: sp
 * @n: tp
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *current;
dlistint_t *new_node;
current = *h;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
i = 0;
while (current != NULL)
{
if (i == idx)
{
new_node->next = current;
new_node->prev = current->prev;
(current->prev)->next = new_node;
current->prev = new_node;
new_node->n = n;
return (new_node);
}
current = current->next;
++i;
}
free(new_node);
return (NULL);
}
