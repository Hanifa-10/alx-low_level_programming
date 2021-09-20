#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string
* @src: string
* Return: resulting string dest
*/

char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
