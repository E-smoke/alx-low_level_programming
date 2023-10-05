#include "main.h"
/**
 * malloc_checked - funct
 * @b: para
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
