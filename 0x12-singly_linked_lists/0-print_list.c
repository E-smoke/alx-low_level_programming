#include "lists.h"
/**
 * print_list - prints the elements of a liked list
 * @h: root ptr
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
int i;
unsigned int n;
char *str;
const list_t *current;
n = 0;
for (current = h; current != NULL; current = current->next)
{
if (current->str == NULL)
{
str = "[0] (nil)\n";
while (*str != '\0')
{
_putchar(*str);
++str;
}
}
else
{
_putchar('[');
_putchar('0' + (current->len));
_putchar(']');
_putchar(' ');
i = 0;
while (current->str[i] != '\0')
{
_putchar((current->str)[i]);
++i;
}
_putchar('\n');
}
++n;
}
return (n);
}
