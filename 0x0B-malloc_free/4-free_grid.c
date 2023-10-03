#include "main.h"
/**
 * free_grid - funct
 * @grid: 1p
 * @height: 2p
 * Return: returns a pointer
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; ++i)
{
free(grid[i]);
}
free(grid);
}
