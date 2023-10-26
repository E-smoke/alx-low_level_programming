#include "main.h"
/**
 * print_binary - prints binary rep of a number
 * @n: the number in decimal
 */
void print_binary(unsigned long int n)
{
int i;
int t;
int size;
unsigned long int tell;

unsigned long int mask;
size = sizeof(unsigned long int) * 8;
t = 0;
for (i = (size - 1); i >= 0; --i)
{
mask = (1UL << i);
tell = (mask & n);
if (i == 0)
{
t = 1;
}
if (tell)
{
t = 1;
printf("1");
}
else
{
if (t == 1)
{
printf("0");
}
}
}
}
