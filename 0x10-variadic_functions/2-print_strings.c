#include "variadic_functions.h"
/**
 * print_strings - funct
 * @separator: 1p
 * @n: 2p
 * @...: 3p
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
char *temp;
if (separator == NULL)
{
separator = "";
}
va_start(ptr, n);
for (i = 0; i < n; ++i)
{
temp = va_arg(ptr, char*);
if (i != (n - 1))
{
if (temp == NULL)
{
printf("(nil)%s", separator);
}
else
{
printf("%s%s", temp, separator);
}
}
else
{
if (temp == NULL)
{
printf("(nil)");
}
else
{
printf("%s", temp);
}
}
}
printf("\n");
va_end(ptr);
}
