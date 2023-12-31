#include "variadic_functions.h"
/**
 * sum_them_all - funct
 * @n: 1p
 * @...: 2p
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list ptr;
sum = 0;
if (n == 0)
{
return (sum);
}
va_start(ptr, n);
for (i = 0; i < n; ++i)
{
sum = sum + va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
