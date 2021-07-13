#include "holberton.h"
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
int i, j, l1 = 0, l2 = 0, l;
char *ar;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[l1] != '\0')
l1++;
while (s2[l2] != '\0')
l2++;
l = l1 + l2;
ar = malloc(sizeof(char) * (l + 1));
if (ar == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
ar[i] = s1[i];
for (j = 0; s2[j]; i++, j++)
ar[i] = s2[j];
ar[i] = '\0';
return (ar);
}

