#include <stdio.h>

int primes(long unsigned int a);
int primes(long unsigned int a)
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
{long long unsigned l;
long unsigned int i;
long long unsigned int array[10];
long unsigned int c=0;
long long unsigned int n=612852475143;
for(i=2; i<n; ++i)
{
if(((n%i)==0)&&primes(i))
{
array[c]=i;
++c;
n=n/i;
i=1;
}
}
array[c]=n;
array[c+1]=612852475143;
l=array[0];
for(i=0; i<c; ++i)
{
if((array[i+1]>array[i])&&i!=c)
{
l=array[i+1];
}
}
printf("%llu\n", l);
return 0;
}
