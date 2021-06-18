#include <stdio.h>

/**
* main - print all numbers of base 16 starting 0
*
* Return: Always 0 (Success)
*/

int main(void)
{
int hexadecimal = 0;

while (hexadecimal <= 9)
putchar(hexadecimal++ + '0');

hexadecimal = 'a';

while (hexadecimal <= 'f')
putchar(hexadecimal++);
putchar('\n');

return (0);
}
