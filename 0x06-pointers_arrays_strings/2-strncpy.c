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
for (i = 0; i < n; ++i)
{
dest[i] = src[i];
}
dest[i] =  '\0';
return (dest);
}

