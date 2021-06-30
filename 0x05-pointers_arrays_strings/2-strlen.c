#include "holberton.h"

/**
* _strlen - return length of a string
* @s: string
* Return: always 0
*/

int _strlen(char *s)
{
int i, length;

for (i = 0; s[i] != '\0'; i++)
length++;

return (length);

