#include "function_pointers.h"
/**
 * print_name - funct
 * @name: 1p
 * @f: 2p
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
