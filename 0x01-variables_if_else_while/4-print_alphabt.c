#include <stdlib.h>
#include <stdio.h>
int main( void )
{
int i;
for(i=97;i<123;++i)
{
if(i!='e'&&i!='q')
{
putchar(i);
}
}
putchar('\n');
return (0);
}

