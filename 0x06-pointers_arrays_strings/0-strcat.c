#include "main.h"
/**
 * _strcat - concantenate.
 * @dest: first parameter
 * @src: second parameter
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
int n = 0;
int c = 0;
while (dest[n] != '\0')
{
++n;
}
while (src[c] != '\0')
{
dest[n + c] = src[c];
++c;
}
dest[n + c] = '\0';
return (dest);
}

