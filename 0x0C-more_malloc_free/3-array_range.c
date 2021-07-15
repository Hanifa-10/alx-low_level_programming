#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: first integer number
* @max: second integer number
* Return: pointer to newly allocated memory, NULL failure
*/

int *array_range(int min, int max)
{
int i, j, *mem;
if (min > max)
return (NULL);
j = max - min + 1;

mem = malloc(sizeof(int) * j);

if (mem == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
mem[i - min] = i;
}
return (mem);
}

