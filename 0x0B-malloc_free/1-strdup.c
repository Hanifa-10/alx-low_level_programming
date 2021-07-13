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
int i, length;
length = 0;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
length++;

dup = malloc(sizeof(char) * (length + 1));

if (dup == NULL)
return (NULL);
for (i = 0; i < length; i++)
dup[i] = str[i];
dup[length] = '\0';
return (dup);
}

