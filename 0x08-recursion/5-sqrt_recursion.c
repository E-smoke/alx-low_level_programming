#include "main.h"
/**
 * loop1 - funct
 * @i: 1p
 * @n: 2p
 * Return: returns
 */
int loop1(int i, int n)
{
if (i > n)
{
return (-1);
}
if ((i * i) == n)
{
return(i);
}
return (loop1((i + 1), n));
}
/**
 *  _sqrt_recursion - funct
 * @n: 1p
 * Return: returns
 */
int _sqrt_recursion(int n)
{
int i = 0;
return (loop1(i, n));
}
