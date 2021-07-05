#include "holberton'h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: integer
* @size: size of squre matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
int i, j, m1 = 0, m2 = 0;

for (i = 0; i < (size * size); i += (size + 1))

m1 += a[i];
for (j = (size - 1); j <= ((size * size) - size); j += (size - 1))

m2 += a[j];

printf("%d, %d\n", m1, m2);
}

