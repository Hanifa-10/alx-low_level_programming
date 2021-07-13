#include "holberton.h"
#include <stddef.h>
#include <stdio.h>

/**
* create_array - creates an array of chars, and initializes
* it with a specific char.
* @size: size of the  array
* @c: character
* Return: a pointer to the array for success, else
* NULL if size = 0 or if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(size * sizeof(char));

if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}

