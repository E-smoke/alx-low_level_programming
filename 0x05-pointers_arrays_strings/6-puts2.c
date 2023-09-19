#include "main.h"
/**
 * puts2 - prints a string.
 * @str: receives a copy of the string input.
 * return: void
 */
void puts2(char *str)
{
int i;
int n = 0;
while (str[n] != '\0')
{
n++;
}
for (i = 0; i < n; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
