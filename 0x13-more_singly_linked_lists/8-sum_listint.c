#include "lists.h"
/**
 * sum_listint - sum function
 * @head: a ptr to head node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
int sum;
if (head == NULL)
{
return (0);
}
else
{
sum = 0;
while (head != NULL)
{
sum += (head->n);
head = head->next;
}
}
return (sum);
}
