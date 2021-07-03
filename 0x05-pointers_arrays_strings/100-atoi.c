#include "holberton.h"

/**
* _atoi - converts a string to an integer
* @s: string to convert
* Return: Integer value of converted string
*/

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {
if (*sn == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
}
while (*s++)

return (num *sign);
}

