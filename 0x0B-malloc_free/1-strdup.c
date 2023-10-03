#include <main.h>
/**
 * _strdup - funct
 * @str: para
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
int i;
int c;
char *ptr;
c = 0;
while (str[c] != '\0')
{
++c;
}
if (c == 0)
{
return (NULL);
}
ptr = (char *)malloc(c *sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < c; ++i)
{
*(ptr + i) = str[i];
}
return (ptr);
}
