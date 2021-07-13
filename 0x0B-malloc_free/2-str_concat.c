#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string
* @s2: string
* Return: pointer to new allocated space s1
* followed by s2 and null terminated, NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
int l1, l2, i  = 0;
char *ar;

if (s1 == NULL || s2 == NULL)
s1 = s2 = "";
for (l1 = 0; l1 <= *s1; l1++)
{
}
for (l2 = 0; l2 <= *s2; l2++)
{
}
ar = malloc(sizeof(char) * (l1 + l2 + 1));
if (ar == NULL)
return (NULL);

while (*s1)
{
ar[i] = *s1;
i++;
s1++;
}
while (*s2)
{
ar[i] = *s2;
i++;
s2++;
}
return (ar);
}

