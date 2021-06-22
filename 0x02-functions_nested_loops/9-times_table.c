#include "holberton.h"

/**
* times_table -prints the 9 times table, starting 0
*/

void times_table(void)
{
int row, column; /* Indexes */
int limit = 10; /* Limit value */
int result;

for (row = 0; row < limit; row++)
{
for (column = 0; column < limit; column++)
{
result = row * column;

if (result <= 9)
{
if (column > 0)
_putchar(' ');

_putchar(result + '0');
}
else if (result > 9)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (column < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

