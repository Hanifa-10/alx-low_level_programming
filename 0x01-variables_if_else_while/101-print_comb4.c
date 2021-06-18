#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits.
*
* Return: Always 0.
*/

int main(void)
{
int v, w, z;

for (v = 0; v < 8; v++)
{
for (w = v + 1; w < 9; w++)
{
for (z = w + 1; z < 10; z++)
{
putchar((v % 10) + '0');
putchar((w % 10) + '0');
putchar((z % 10) + '0');

if (v == 7 && w == 8 && z == 9)
continue;

putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
