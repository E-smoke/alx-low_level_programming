#include "lists.h"
/**
 * add_node_end - add a node at the end of the linked list
 * @head: a ptr to a ptr to the head
 * @str: a string
 * Return: a ptr to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_element;
list_t *current;
current = *head;
if (current == NULL)
{
new_element = (list_t *)malloc(sizeof(list_t));
if (new_element == NULL)
{
return (NULL);
}
else
{
new_element->str = strdup(str);
*head = new_element;
new_element->next = NULL;
}
}
else
{
while (current->next != NULL)
{
current = current->next;
}
new_element = (list_t *)malloc(sizeof(list_t));
if (new_element == NULL)
{
return (NULL);
}
else
{
new_element->str = strdup(str);
current->next = new_element;
new_element->next = NULL;
}
}
return (new_element);
}
