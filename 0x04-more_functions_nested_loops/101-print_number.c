#include "main.h"
void print_number(int n)
{
float a;
int send;
if(n<0)
{
_putchar('-');
n=n*-1;
}
a=n;
if(n==0)
{
_putchar('0');
}
if((a/10)!=0)
{
send=n%10;
send=a-send;
send=send/10;
if(send!=0)
{
print_number(send);
}
_putchar((n%10)+'0');
}
}
