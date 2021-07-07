#include "holberton.h"

/**
* factorial - returns factorial of a given number
*@n: any given number
* Return: -1 if n < 0. Otherwise, factorial
*/

int factorial(int n)
{
if (n == 0)
return (1);
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
return (-1);
}

