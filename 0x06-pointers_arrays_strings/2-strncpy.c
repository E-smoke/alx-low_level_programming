#include "main.h"
/**
 * _strncpy - copies
 * @dest: destination
 * @src: source
 * @n: takes a number
 * Return: returns an integer
 */
char *_strncpy(char *dest, char *src, int n)
{
int l = -1;
int i;
for(i = 0; i < n; ++i)
{
if(src[i] == '\n')
{
l = i;
}
}
if(l == -1)
{
for (i = 0; i < n; ++i)
{
dest[i] = src[i];
}
}
else
{
for (i = 0; i < n; ++i)
{
if(i >= l)
{
dest[i] = '\0';
}
else
{
dest[i] = src[i];
}
}
}
return (dest);
}

