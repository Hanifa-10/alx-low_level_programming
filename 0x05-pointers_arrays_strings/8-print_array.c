#include "holberton.h"
#include <stdio.h>

/**
* print_array -prints n elements of an
* array of integers, followed by a new line
* @a: number
* @n: number
* Return: void
*/

void print_array(int *a, int *n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", *(a + 1));
if (i < (n - 1))
printf(", ");
i++;
}
printf('\n');
}

