#include "main.h"
/**
 * puts_half - prints last half of a string.
 * @str: receives the string.
 * return: void.
 */
void puts_half(char *str)
{
int i;
int n = 0;
while (str[n] != '\0')
{
n++;
}
if ((n % 2) == 0)
{
for (i = n / 2; i < n; ++i)
{
_putchar(str[i]);
}
}
else
{
for (i = (((n - 1) / 2) + 1); i < n; ++i)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
