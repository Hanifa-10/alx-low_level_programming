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
int i;
unsigned int convert = 0;

if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
convert = convert * 2;
else if (b[i] == '1')
convert = conv * 2 + 1;
else
return (0);
}
return (convert);
}

