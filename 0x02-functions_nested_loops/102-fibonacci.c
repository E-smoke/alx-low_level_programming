#include "main.h"
#include <stdio.h>
int main()
{
int i,temp;
int f0=0;
int f1=1;
printf("%d, ", f1);
for(i=2; i<=50; ++i)
{
temp=f1;;
f1=f1+f0;
f0=temp;
if(i!=50)
{
printf("%d, ", f1);
}
if(i==50)
{
printf("%d", f1);
}
}
putchar('\n');
return 0;
}

