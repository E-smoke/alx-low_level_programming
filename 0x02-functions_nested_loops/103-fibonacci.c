#include "main.h"
#include <stdio.h>
int main()
{
int temp;
int f1=1;
int f2=1;
int sum;
temp=f1;
sum=0;
for(f2=1; f2<=4000000; f2=f2+temp)
{
temp=f1;
f1=f2;
if((f2%2)==0)
{
sum=sum+f2;
}
}
printf("%d\n", sum);
return 0;
}

