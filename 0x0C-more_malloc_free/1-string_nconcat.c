#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: destination string
* @s2: string to concatenates
* @n: number of bytes to copy from s2
* Return: pointer to new allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, lens1 = 0, lens2 = 0;

if (s1 == NULL || s2 == NULL)
s1 = s2 = "";

while (*(s1 + lens1) != '\0')
lens1++;
while (*(s2 + lens2) != '\0')
lens2++;

if (lens2 >= n)
lens2 = n;

s = malloc(lens1 + n + 1);
if (s == NULL)
return (s);

for (i = 0; i < lens1; i++)
s[i] = s1[i];
for (i = 0; i < n; i++)
s[i + lens1] = s2[i];
s[i + lens1] = '\0';
return (s);
}

