#include "main.h"
/**
 * alloc_grid - funct
 * @width: 1p
 * @height: 2p
 * Return: returns a ptr to ptr
 */
int **alloc_grid(int width, int height)
{
int i;
int j;
int **ptr;
if ((width <= 0) || (height <= 0))
{
return (NULL);
}
ptr = (int **)malloc(height * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; ++i)
{
*(ptr + i) = (int *)malloc(width * sizeof(int));
if (*(ptr + i) == NULL)
{
for (j = (i - 1); j < 0; --j)
{
free(*(ptr + j));
}
return (NULL);
}
}
for (i = 0; i < height; ++i)
{
for (j = 0; j < width; ++j)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
