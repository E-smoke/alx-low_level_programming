#include "lists.h"
/**
 * pop_listint - delete head node and returns the value of n at head
 * @head: a ptr to ptr
 * Return: the value of n at head
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *current;
if (head == NULL)
{
return (0);
}
if (*head == NULL)
{
return (0);
}
current = *head;
n = (*head)->n;
*head = (*head)->next;
free(current);
return (n);
}
