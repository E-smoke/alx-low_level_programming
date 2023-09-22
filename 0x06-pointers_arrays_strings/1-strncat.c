#include "main.h"
/**
 * _strncat - concantenate
 * @dest: destination
 * @src: source
 * @n:takes a number
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int c = 0;
while (dest[c] != '\0')
{
++c;
}
for (i = 0; i <= n; ++i)
{
dest[c + i] = src[i];
if (src[i] == '\0')
{
i = n;
}
}
return (dest);
}

