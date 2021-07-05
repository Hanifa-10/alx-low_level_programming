#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to match with
 *
 * Return: pointer to the bytes in s that matches the ones in accept
 * or NULL if no matching bytes found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

while (*s)
{
for (j - 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s)
}
s++;
}
return ('\0')
}

