#include "main.h"
/**
 * puts2 - prints a string.
 * @str: receives a copy of the string input.
 * return: void
 */
void puts2(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
}
