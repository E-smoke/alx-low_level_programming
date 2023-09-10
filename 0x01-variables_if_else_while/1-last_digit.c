#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main( void )
{
int n;
char last[100];
int lasti;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
snprintf( last, sizeof(last), "%d", n );
lasti=( last[strlen(last)-1]-'0' );
if( (last[0])== '-' )
{
lasti=-1*lasti;
}
if( lasti>5 )
{
printf("last digit of %d is %d and is greater than 5\n", n, lasti);
}
if( lasti==5 )
{
printf("last digit of %d is %d and is 0\n", n, lasti);
}
if( lasti<6 &&lasti!=0 )
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lasti);
}
return ( 0 );
}

