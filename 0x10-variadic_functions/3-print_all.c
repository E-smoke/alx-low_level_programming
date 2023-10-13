#include "variadic_functions.h"
/**
 * print_all - funct
 * @format: 1p
 * @...: 2p
 */
void print_all(const char * const format, ...)
{
if (format == NULL)
{
return; }
int i, j;
va_list ptr;
char ch;
char *pc, *sep;
i = 0;
j = 0;
sep = "";
va_start(ptr, format);
while (format[j] != '\0')
{
++j; }
while (format[i] != '\0')
{
ch = format[i];
switch (ch)
{
case 'c':
printf("%s%c", sep, va_arg(ptr, int));
break;
case 'i':
printf("%s%d", sep, va_arg(ptr, int));
break;
case 'f':
printf("%s%f", sep, va_arg(ptr, double));
break;
case 's':
pc = va_arg(ptr, char*);
if (pc == NULL)
{
printf("%s(nill)", sep);
break; }
printf("%s%s", sep, pc);
break;
default:
break; }
sep = ", ";
++i; }
printf("\n");
va_end(ptr); }
