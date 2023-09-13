#include "main.h"
int print_last_digit(int c)
{
if(c<0)
{
c=(-1*c);
}
_putchar((c%10)+'0');
return (c%10);
}
