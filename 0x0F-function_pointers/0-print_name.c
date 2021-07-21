#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - prints a name
* @name: name to print
* @f: pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *));
{
if (f == NULL)
return;
if (name == NULL)
return;
(*f)(name);
}

