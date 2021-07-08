#include "holberton.h"


/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to check for square root
* Return: -1 if n does not have natural square root
*/

int _sqrt_recursion(int n)
{
int i;
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_recursion(n));
}

