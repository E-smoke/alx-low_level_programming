#include "main.h"
/**
 * create_array - the funct
 * @size: 1p
 * @c: 2p
 * Return: returns a void pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
ptr = (char *)malloc(size);
for (i = 0; i < size; ++i)
{
*(ptr + i) = c;
}
return (ptr);
}
