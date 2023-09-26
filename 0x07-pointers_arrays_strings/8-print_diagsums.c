#include "main.h"
/**
 * print_diagsums - funct
 * @a: first
 * @siz: second
 * Return: void
 */
void print_diagsums(int *a, int siz)
{
int i;
int j;
int *ptr = a;
int sum = *ptr;
for (i = 0; i < (siz - 1); ++i)
{
ptr = (1 + siz + ptr);
sum = sum + (*ptr);
}
printf("%d, ", sum);
ptr = a;
sum = 0;
for (i = 0; i < siz; ++i)
{
ptr = (siz - 1 + ptr);
sum = sum + (*ptr);
}
printf("%d\n", sum);
}
