#include <stdlib.h>
#include <stdio.h>
int main( void )
{
int i;
int j;
for(i=48; i<58; ++i)
{
for(j=i+1; j<58; ++j)
{
if(i!=57)
{
putchar(i);
putchar(j);
}
if(!(i==56&&j==57))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
