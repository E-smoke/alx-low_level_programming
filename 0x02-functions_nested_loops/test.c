#include "main.h"
void jack_bauer()
{
char j[5]="00:00";
_putchar(j[0]);
_putchar(j[1]);
_putchar(j[2]);
_putchar(j[3]);
_putchar(j[4]);
_putchar('\n');
while((j[0]!=50)||(j[1]!=51)||(j[3]!=53)||(j[4]!=57))
{
j[4]=(j[4]+1);
if(j[4]==('0'+10))
{
j[4]='0';
j[3]=j[3]+1;
}
if(j[3]==('0'+6))
{
j[3]='0';
j[1]=j[1]+1;
}
if(j[1]==('0'+10))
{
j[1]='0';
j[0]=j[0]+1;
}
if(!((j[0]!=50)||(j[1]!=51)||(j[3]!=53)||(j[4]!=57)))
{
_putchar(j[0]);
_putchar(j[1]);
_putchar(j[2]);
_putchar(j[3]);
_putchar(j[4]);
_putchar('\n');
}
if((j[0]!=50)||(j[1]!=51)||(j[3]!=53)||(j[4]!=57))
{ 
_putchar(j[0]);
_putchar(j[1]);
_putchar(j[2]);
_putchar(j[3]);
_putchar(j[4]);
_putchar('\n');
}
}
}

int main()
{
	jack_bauer();
return 0;
}
