#include "main.h"
/**
 * _memset - the function
 * @s: first para
 * @b: second para
 * @n: third para
 * Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; ++i)
{
s[i] = b;
}
return (s);
}
