#include "main.h"
/**
 * _strspn - the funct
 * @s: first para
 * @accept: second para
 * Return: return the number
 */
unsigned int _strspn(char *s, char *accept)
{
int j;
int i = 0;
unsigned int c = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if(accept[j] == s[i])
{
++c;
break;
}
++j;
}
++i;
}
return (c);
}

