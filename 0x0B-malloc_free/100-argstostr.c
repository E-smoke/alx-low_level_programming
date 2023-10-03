#include "main.h"
/**
 * argstostr - funct
 * @ac: 1p
 * @av: 2p
 * Return: a string
 */
char *argstostr(int ac, char **av)
{
int i;
int j;
int k;
char *ptr;
int c;
c = 0;
k = 0;
if ((ac == 0) || (av == NULL))
{
return (NULL);
}
for (i = 0; i < ac; ++i)
{
j = 0;
while (av[i][j] != '\0')
{
++c;
++j;
}
}
c += ac;
++c;
ptr = (char *)malloc(c *sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < ac; ++i)
{
j = 0;
while (av[i][j] != '\0')
{
*(ptr + k) = av[i][j];
++j;
++k;
}
*(ptr + k) = '\n';
++k;
}
return (ptr);
}
