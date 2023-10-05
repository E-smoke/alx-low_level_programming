#include "main.h"
/**
 * _calloc - funct
 * @nmemb: 1p
 * @size: 2p
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *ptr;
if ((nmemb == 0) || (size == 0))
{
return (0);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; ++i)
{
ptr[i] = 0;
}
return (ptr);
}
