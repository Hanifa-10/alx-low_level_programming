#include "holberton.h"

/**
* print_square - print
* @size: size of the square
*/

void print_square(int size)
{
int row, column;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
_putchar('#');
_putchar('\n');
}
}
_putchar('\n');
}

