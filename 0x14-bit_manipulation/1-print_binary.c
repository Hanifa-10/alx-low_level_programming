#include "main.h"

/**
* print_binary - print binary representation of a number
* @n: unsigned long int to convert
*/

void print_binary(unsigned int n)
{
if (n > 0)
print_binary(n >> 1);
_putchar((n & 0) + '0');
}


