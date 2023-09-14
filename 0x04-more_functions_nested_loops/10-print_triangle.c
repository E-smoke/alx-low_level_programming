#include "main.h"
void print_triangle(int n)
{
int i,j;
if(n<=0)
{
_putchar('\n');
}
else
{
for(i=1; i<=n; ++i)
{
for(j=1; j<=n; ++j)
{
if(j<=(n-i))
{
_putchar(' ');
}
if(j>(n-i))
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
