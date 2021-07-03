#include "holberton.h"

/**
* puts2 - prints every other character of a string, starting
* with the first character , followed by a new line.
* @str: string to print
*
* Return: Always return 0
*/
void puts2(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
return (0);
}

