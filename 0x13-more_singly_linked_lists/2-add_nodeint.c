#include "lists.h"
/**
 * add_nodeint - adds new node
 * @head: a ptr that pts to the head ptr
 * @n: set the integer comp of the struct
 * Return: addy of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->next = *head;
*head = new;
new->n = n;
return (new);
}
