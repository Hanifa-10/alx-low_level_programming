#include "main.h"
/**
* get_bit -function that returns the value of a bit at a given index
* @n: number of bits
* @index: index of the bit you want to get
* Return: the value of the bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bit_value;
/** for a 64-bit machine */
if (index > 64)
return (-1);
bit_value = (n >> index) & 1;

return (bit_value);
}

