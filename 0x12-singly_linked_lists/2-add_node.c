#include "lists.h"
/**
 * add_node - add node
 * @head: a ptr that pts to a ptr to the root
 * @str: string
 * Return: returns the addy
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_element;
if (head == NULL)
{
return (NULL);
}
new_element = (list_t *)malloc(sizeof(list_t));
if (new_element == NULL)
{
return (NULL);
}
else
{
new_element->next = *head;
new_element->str = strdup(str);
*head = new_element;
}
return (new_element);
}
