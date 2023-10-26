#include "main.h"
/**
 * flip_bits - flips bit
 * @n: from
 * @m :to
 * Return: the number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i;
unsigned int c;
unsigned long int mask;
unsigned int size = sizeof(unsigned long int) * 8;
c = 0;
for (i = 0; i < size; ++i)
{
mask = (1UL << i);
if ((mask & n) != (mask & m))
{
++c;
}
}
return (c);
}
