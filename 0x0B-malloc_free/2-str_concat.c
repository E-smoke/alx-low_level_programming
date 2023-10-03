#include "main.h"
/**
 * str_concat - funct
 * @s1: 1p
 * @s2: 2p
 * Return: return a pointer
 */
char *str_concat(char *s1, char *s2)
{
int i;
int c1;
int c2;
int k;
char *ptr;
c1 = 0;
c2 = 0;
if (s1 != NULL)
{
while (s1[c1] != '\0')
{
++c1;
}
}
if (s2 != NULL)
{
while (s2[c2] != '\0')
{
++c2;
}
}
ptr = (char *)malloc((c1 + c2 + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < c1; ++i)
{
*(ptr + i) = s1[i];
}
k = i;
for (i = i; i < (c2 + c1); ++i)
{
*(ptr + (i)) = s2[i - k];
}
*(ptr + i) = '\0';
return (ptr);
}
