#include <stdio.h>

/**
* main - prints all possible combinations of two-digit numbers.
*
* Return: Always 0
*/

int main(void)
{
int v, w;

v = 0;

for (; v < 99; v++)
{
for (w = v + 1; w <= 99; w++)
{
if (v < w)
{
putchar (v / 10 + 48);
putchar (v % 10 + 48);
putchar (' ');
putchar (w / 10 + 48);
putchar (w % 10 + 48);
if (v != 98)
{
putchar (',');
putchar (' ');
}

}
}
}
putchar('\n');
return (0);
}
