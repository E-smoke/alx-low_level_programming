#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end
 * @head: ptr 2 ptr
 * @n: the value of the node
 * Return: addy of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *current = *head;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
if (current == NULL)
{
new_node->next = *head;
new_node->prev = NULL;
new_node->n = n;
(*head) = new_node;
return (new_node);
}
while (current->next != NULL)
{
current = current->next;
}
new_node->next = NULL;
new_node->prev = current;
new_node->n = n;
current->next = new_node;
return (new_node);
}
