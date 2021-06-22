#include "holberton.h"

/**
* _abs -computes absolute value of an integer
* @j: the number to check
*
* Return: absolute value integer
*/

int _abs(int j)
{
if (j < 0)
j = j * -1;
return (j);
}

