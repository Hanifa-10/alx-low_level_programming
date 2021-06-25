#include "holberton.h"

/**
* print_diagonal - draw a diagonal line on the terminal
* @n: diagonal line
*/

void print_diagonal(int n)
{
int row, column;

if (n > 0)
{
for (row = 0; row < n; ++row)
{
for (column = 0; column < row; ++column)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
_putchar('\n');
}

