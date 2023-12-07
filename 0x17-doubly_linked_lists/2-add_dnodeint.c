#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning
 * @head: the head
 * @n: the value of the node
 * Return: the addy of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
if (*head == NULL)
{
new_node->next = *head;
new_node->prev = NULL;
new_node->n = n;
(*head) = new_node;
return (new_node);
}
new_node->next = *head;
new_node->prev = NULL;
new_node->n = n;
(*head)->prev = new_node;
(*head) = new_node;
return (new_node);
}
