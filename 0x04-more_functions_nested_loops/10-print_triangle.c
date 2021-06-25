#include "holberton.h"

/**
* print_triangle - prints a triangle
* @size: size of triangle
*/

void print_triangle(int size)
{
int row, column;

if (size > 0)
{
for (row = 1; row <= size; ++row)
{
for (column = 0; column <= size - 1; ++column)
			{
if (column < (size - row))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}

