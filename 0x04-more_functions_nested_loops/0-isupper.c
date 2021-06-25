#include "holberton"

/**
* _isupper - checks for uppercase letters
*
* Describtion: Prints the alphabet with _putchar
* @c: character to check
* Return: 0 or 1
*/

int _isuper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

