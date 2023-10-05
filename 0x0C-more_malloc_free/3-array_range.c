#include "main.h"
/**
 * array_range - funct
 * @min: 1p
 * @max: 2p
 * Return: returns a pointer
 */
int *array_range(int min, int max)
{
int i;
int r;
int *ptr;
if (min > max)
{
return (NULL);
}
r = (max - min + 1);
ptr = (int *)malloc(r *sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < r; ++i)
{
ptr[i] = min + i;
}
return (NULL);
}
