#include "main.h"
/**
 * clear_bit - clear bit at an index
 * @n: ptr to the number
 * @index: the index
 * Return: 1 on success and 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
unsigned int size = sizeof(unsigned long int) * 8;
if (index >= size)
{
return (-1);
}
mask = (1UL << index);
if ((mask & (*n)))
{
mask = (~1UL) << index;
*n = (mask & (*n));
}
return (1);
}
