#include "main.h"
/**
 * set_bit - set bit at an index to 1
 * @n: the number
 * @index: the index
 * Return: 1 on success and 0 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
unsigned int size = sizeof(unsigned long int) * 8;
if (index >= size)
{
return (-1);
}
mask = (1UL << index);
if (!(mask & (*n)))
{
*n = (mask | (*n));
}
return (-1);
}
