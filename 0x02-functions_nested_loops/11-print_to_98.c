iinclude "holberton.h"

/**
* print_to_98 -prints all natural numbers from n to 98
* @n: int
*/

void print_to_98(int n)
{
while (n < 98)
{
print("%d", n);

putchar(',');
putchar(' ');

n++;
}

for (; n > 98; n--)
{
printf("%d", n)

putchar(',');
putchar(' ');
}
if (n == 98)
printf("%d\n", n);
}

