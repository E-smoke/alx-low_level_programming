#include "main.h"
void more_numbers(void)
{
int i;
int j;
int temp;
for(i=1; i<11; ++i)
{
for(j=0; j<15; ++j)
{
temp=j;
if(j>9)
{
temp=1;
}
_putchar('0'+temp);
if(j>9)
{
temp=j%10;
_putchar('0'+temp);
}
}
_putchar('\n');
}
}
