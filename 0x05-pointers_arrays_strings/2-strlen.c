#include "holberton.h"

/**
* _strlen - return length of a string
* @s: string
* Always return 0 (Success)
*/

int _strlen(char *s)
{
int i, length;

for (i = 0; s[i] != '\0'; i++)
length++;

return (length);
}

