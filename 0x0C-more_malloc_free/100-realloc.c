#include "holberton.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block
* @ptr: void pointer to the allocated area
* @old_size: the old size of the allocated memory
* @new_size: the new size of reallocated memory
* Return: void pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size > old_size)
{
free(ptr);
ptr = (int *) malloc(new_size);

if (ptr == NULL)
return (NULL);
else
return (ptr);
}
if (new_size == old_size)
{
free(ptr);
return (NULL);
}
return (ptr);
}

