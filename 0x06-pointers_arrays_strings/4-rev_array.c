#include "main.h"
/**
 * reverse_array - reverses
 * @a: ptr
 * @n: the number of arrays
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int t[n];
for (i = 0; i < n; ++i)
{
t[i] = a[(n - 1) - i];
}
for (i = 0; i < n; ++i)
{
a[i] = t[i];
}
}
