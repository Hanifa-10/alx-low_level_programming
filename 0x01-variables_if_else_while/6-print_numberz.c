#include <stdio.h>

/**
* main - print all digits of base 10 starting 0
* without using char
*
* Return: Always 0 (Success)
*/

int main(void)
{
int base = 0;

while (base <= 9)
{
putchar (base + '0');
base++;
}
putchar ('\n');

return (0);
}
