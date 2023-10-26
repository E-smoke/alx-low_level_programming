#include "main.h"
/**
 * get_bit - returns bit at a particular index
 * @n: the number
 * @index: the index
 * Return: returns the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
unsigned int size = sizeof(unsigned long int) * 8;
mask = (1UL << index);
if (index >= size)
{
return (-1);
}
if (mask & n)
{
return (1);
}
return (0);
}
