#include "main.h"
int print_sign(int n)
{
if((-1*n)<n)
{
_putchar('+');
return 1;
}

if((-1*n)>n)
{
_putchar('-');
return -1;
}

if((-1*n)==n)
{
_putchar('0');
return 0;
}
return 2;
}
