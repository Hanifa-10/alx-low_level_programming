#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: string
* @s2: string
* Return: 0 if they are equal, less than 0 if s1 < s2 and greater than
* 0 if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 != *s2)
return (*s1 - *s2);

return (0);
}
