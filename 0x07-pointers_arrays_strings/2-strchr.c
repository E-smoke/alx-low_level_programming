#include "main.h"
/**
 * _strchr - the funct
 * @s: first para
 * @c: second para
 * Return: indicator
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
++i;
}
return (0);
}
