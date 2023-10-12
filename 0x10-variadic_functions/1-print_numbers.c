#include "variadic_functions.h"
/**
 * print_numbers - funct
 * @separator: 1p
 * @n: 2p
 * @...: 3p
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
if (separator == NULL)
{
separator = "";
}
va_start(ptr, n);
for (i = 0; i < n; ++i)
{
if (i != (n - 1))
{
printf("%d%s", va_arg(ptr, int), separator);
}
else
{
printf("%d\n", va_arg(ptr, int));
}
}
va_end(ptr);
}
