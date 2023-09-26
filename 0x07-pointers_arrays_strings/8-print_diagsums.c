#include "main.h"
/**
 * print_diagsums - funct
 * @a: first
 * @siz: second
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int *ptr = a;
int sum = *ptr;
for (i = 0; i < (size - 1); ++i)
{
ptr = (1 + size + ptr);
sum = sum + (*ptr);
}
printf("%d, ", sum);
ptr = a;
sum = 0;
for (i = 0; i < size; ++i)
{
ptr = (size - 1 + ptr);
sum = sum + (*ptr);
}
printf("%d\n", sum);
}
