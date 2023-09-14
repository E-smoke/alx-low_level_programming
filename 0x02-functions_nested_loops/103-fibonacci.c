#include "main.h"
#include <stdio.h>
int main()
{
int temp;
int f1=1;
int f2=1;
temp=f2;
int sum;
sum=0;
for(f2=1; f2<=4000000; f2=f2+f1)
{
temp=f2;
f1=temp;
if((f2%2)==0)
{
sum=sum+f2;
}
}
printf("%d", sum);
return 0;
}
