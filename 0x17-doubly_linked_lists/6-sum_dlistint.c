#include "lists.h"
/**
 * sum_dlistint - sum all the elements of double linked list
 * @head: the head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum;
dlistint_t *current;
current = head;
sum = 0;
if (current == NULL)
{
return (sum);
}
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
