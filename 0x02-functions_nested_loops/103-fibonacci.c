#include "main.h"
#include <stdio.h>
int main()
{
long long int i,temp;
long long int f1=1;
long long int f2=1;
temp=f2;
long long sum=0;
for(f2=1; f2<=4000000; f2=f2+f1)
{
temp=f2;
f1=temp;
if((f2%2)==0)
{
sum=sum+f2;
}
}
printf("%lld", sum);
return 0;
}

