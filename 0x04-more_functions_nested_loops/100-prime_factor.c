#include <stdio.h>
int prime(long unsigned int a)
{
long unsigned int i;
for(i=2; i<a; ++i)
{
if(a==2)
{
return 1;
}
if((a%i)==0)
{
return 0;
}
}
return 1;
}

int main()
{
long unsigned int i;
long long unsigned int array[10];
long unsigned int c=0;
long long unsigned int n=612852475143;
for(i=2; i<n; ++i)
{
if(((n%i)==0)&&prime(i))
{
array[c]=i;
++c;
n=n/i;
i=1;
}
}
array[c]=n;
array[c+1]=612852475143;
c=0;
while(array[c]!=612852475143)
{
printf("%lu ", array[c]);
++c;
}
return 0;
}

