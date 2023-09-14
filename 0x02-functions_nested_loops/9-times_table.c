#include "main.h"
void times_table()
{
int i,j,mod,r,n,c;
char rc[10];

for(i=0;i<10; ++i)
{
for(j=0;j<10; ++j)
{
r=i*j;
if(r==0)
{
if(j==0)
{
_putchar('0');
_putchar(',');
}
else if(j==9)
{
_putchar(' ');
_putchar(' ');
_putchar('0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar('0');
_putchar(',');
}
}
else
{
mod=1;
n=0;
while(mod!=0||r!=0)
{
mod=r%10;
r=r-mod;
r=r/10;
if(mod!=0||r!=0)
{
rc[n]=mod+'0';
++n;
}
}
if(n==1){
_putchar(' ');
_putchar(' ');
}
if(n==2)
{
_putchar(' ');
}
for(c=n-1; c>=0; --c)
{
_putchar(rc[c]);
}
if(j!=9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}
