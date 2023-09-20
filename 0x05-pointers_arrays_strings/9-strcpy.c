#include "main.h"
/**
 * _strcpy - copy content of one string to another
 * @dest: destination
 * @src: source
 * Return: returns string
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;
while (src[n] != '\0')
{
dest[n] = src[n];
++n;
}
dest[n] = src[n];
return (dest);
}
