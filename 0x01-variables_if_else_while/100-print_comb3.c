#include <stdio.h>

/**
* main - prints all possible combinations of two digits.
*
* Return: Always 0
*/

int main(void)
{
int v, w;

for (v = 0; v < 9; v++)
{
for (w = v + 1; w < 10; w++)
{
putchar((v % 10) + '0');
putchar((w % 10) + '0');

if (v == 8 && w == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
