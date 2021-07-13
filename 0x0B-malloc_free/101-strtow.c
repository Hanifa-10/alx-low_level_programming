#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
* strtow - splits string into words
* @str: string
*
* Return: 0
*/

char **strtow(char *str)
{

char *s;
int len, i;

while (str[len] != '\0')
len++;

s = malloc(sizeof(char) * (len + 1));
if (str == NULL || *str == '\0' || s == NULL)
return (NULL);


	for (i = 0; i < len; i++)
s[i] = str[len];

return (s);

}
