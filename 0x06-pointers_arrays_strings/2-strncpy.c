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
int i;
int d = 0;
for (i = 0; i < n; ++i)
{
if (src[i] == '\0')
{
dest[i] = '\0';
d = i;
}
else if (d < i)
{
dest[i] = '\0';
}
else
{
dest[i] = src[i];
}
}
return (dest);
}

