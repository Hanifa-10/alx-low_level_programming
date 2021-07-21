#include "function_pointers.h"

/**
* array_iterator - executes a function given as a
* parameter on each element of array
* @array: pointer to int
* @size: size of an array
* @action: pointer to a function returning int
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long len = 0;

if (array == NULL || !size || action == NULL)
return;

while (len < size)
{
action(array[len]);
len++;
}

}

