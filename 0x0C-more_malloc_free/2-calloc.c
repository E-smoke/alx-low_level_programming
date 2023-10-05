#include "main.h"
/**
 * _calloc - funct
 * @nmemb: 1p
 * @size: 2p
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if ((nmemb == 0) || (size == 0))
{
return (0);
}
ptr = malloc(nmemb * size);
return (ptr);
}
