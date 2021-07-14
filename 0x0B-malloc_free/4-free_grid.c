#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees memory allocated for 2 dimensional grid
*
* @grid: pointer to pointer
* @height: height of grid
*/

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

