#include "main.h"
/**
 * create_array - the funct
 * @size: 1p
 * @c: 2p
 * Return: returns a void pointer
 */
char *create_array(unsigned int siz, char c)
{
int i;
char *ptr;
ptr = (char *)malloc(siz);
for (i = 0; i < siz; ++i)
{
*(ptr + i) = c;
}
return (ptr);
}
