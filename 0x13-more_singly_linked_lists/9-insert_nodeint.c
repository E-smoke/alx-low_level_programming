#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: ptr to head ptr
 * @idx: index
 * @n: the value to put
 * Return: addy of new ptr
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int c;
unsigned int i;
listint_t *current;
listint_t *h;
listint_t *new;
if (head == NULL)
{
return (NULL); }
if (*head == NULL)
{
return (NULL); }
current = *head;
h = *head;
c = 0;
while (current != NULL)
{
current = current->next;
++c; }
if (idx >= c)
{
return (NULL); }
for (i = 0; i < idx; ++i)
{
h = h->next; }
new = (listint_t *)(malloc(sizeof(listint_t)));
if (new == NULL)
{
return (NULL); }
new->n = n;
new->next = h;
h = *head;
for (i = 0; i < (idx - 1); ++i)
{
h = h->next; }
h->next = new;
return (new); }
