#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as parameter
 * @str: string to copy
 *
 * Return: a pointer to the duplicated string on success,
 * else NULL
 */

char *_strdup(char *str)
{
char *dup;
unsigned int i, length;
length = 0;

if (str == NULL)
return (NULL);
while (str[length])
length++;

dup = malloc(sizeof(char) * (length + 1));

if (dup == NULL)
return (NULL);
while ((dup[i] = str[i]) != '\0')
i++;
return (dup);
}

