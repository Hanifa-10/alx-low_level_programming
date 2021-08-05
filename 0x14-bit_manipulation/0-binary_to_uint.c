#include "main.h"
/**
* binary_to_uint - converts a binary number to unsigned int
* @b: string
* Return: converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* and if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int conv = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] != '0' || b[i] != '1')
return (0);
conv = 2 * conv + (b[i] - '0');
}
return (conv)
}

