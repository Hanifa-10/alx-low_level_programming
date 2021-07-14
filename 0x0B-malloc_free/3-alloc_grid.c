#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of the array
* @height: height of the array
*
* Return: a pointer to a 2 D arry of integers on success
* and NULL on failure
*/

int **alloc_grid(int width, int height)
{
int **ar;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);
ar = (int **) malloc(sizeof(int *) * height);
if (ar == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ar[i] = (int *)malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
free(ar);
for (j = 0; j < i; j++)
free(ar[j]);
return (NULL);
}
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}

