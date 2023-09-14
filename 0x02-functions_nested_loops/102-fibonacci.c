#include "main.h"
#include <stdio.h>
//#include <string.h>
int main()
{
long long int i,temp;
long long int f0=0;
long long int f1=1;
printf("%lld, ", f1);
for(i=2; i<=50; ++i)
{
temp=f1;;
f1=f1+f0;
f0=temp;
if(i!=50)
{
printf("%lld, ", f1);
}
if(i==50)
{
printf("%lld", f1);
}
}
putchar('\n');
return 0;
}

