#include "main.h"
/**
* set_bit - function to set the value of a bit to1 at a given index
* @n: number of bits
* @index: index of the bit you want to set
* Return: 1 if it worked or an -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

*n = (1 << index) | *n;

return (1);
}

