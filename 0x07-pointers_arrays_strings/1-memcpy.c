#include "main.h"
/**
 * _memcpy - the func
 * @dest: first para
 * @src: second para
 * @n: number of chars to be coppied
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; ++i)
{
dest[i] = src[i];
}
return (dest);
}
