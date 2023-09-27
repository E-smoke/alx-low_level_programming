#include "main.h"
/**
 * factorial - funct
 * @n: para
 * Return: returns the factorial
 */
int factorial(int n)
{
if(n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
