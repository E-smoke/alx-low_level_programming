#include "main.h"
/**
 * loop - funct
 * @i: para
 * @n: para
 * Return: bool
 */
int loop(int i, int n)
{
if (n == 2)
{
return (1);
}
if (i >= n)
{
return (1);
}
if ((n % i) == 0)
{
return(0);
}
return (loop((i + 1), n));
}
/**
 * is_prime_number - funct
 * @n: para
 * Return: bool
 */
int is_prime_number(int n)
{
int i = 2;
return (loop(i, n));
}
