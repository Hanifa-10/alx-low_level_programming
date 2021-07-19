#include "holberton.h"
#include <stdlib.h>

/**
* *_calloc - allocates memory for an array
* @nmemb: number of array elements
* @size: the size of each elements
* Return: void pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ar;

if (nmemb == 0 || size == 0)
return (NULL);
ar = malloc(nmemb * size);

if (ar == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
ar[i] = 0;
return (ar);
}

