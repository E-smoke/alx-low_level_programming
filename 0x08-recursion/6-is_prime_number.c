#include "main.h"
/**
 * is_prime_number - funct
 * @n: para
 * Return: bool
 */
int is_prime_number(int n)
{
int i;
if (n == 2)
{
return (1);
}
for (i = 2; i < n; ++i)
{
if ((n % i) == 0)
{
return (0);
}
}
return (1);
}
