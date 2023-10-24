#include "lists.h"
/**
 * add_nodeint_end - add element at the end
 * @head: ptr to ptr to head
 * @n: set n
 * Return: ptr to the new element added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current;

current = *head;
if (current == NULL)
{
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
*head = new;
new->next = NULL;
new->n = n;
return (new);
}
while (current->next != NULL)
{
current = current->next;
}
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
{
return (new);
}
current->next = new;
new->next = NULL;
new->n = n;
return (new);
}
