#include "main.h"
/**
 * string_toupper - capital
 * @str: first para
 * Return: returns a string
 */
char *string_toupper(char *str)
{
int c = 0;
int i = 0;
while (str[c] != '\0')
{
++c;
}
for (i = 0; i < c; ++i)
{
if ((str[i] >= 'a') && (str[i] <= 122))
{
str[i] = (str[i] - 32);
}
}
return (str);
}
