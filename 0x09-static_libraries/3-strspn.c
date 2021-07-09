#include "holberton.h"

/**
* _strspn - gets length of a prefix substring
* @s: string
* @accept: string
* Return: length of same characters in the strings
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
