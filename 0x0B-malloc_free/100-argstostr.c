#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all arguments
* @ac: integer
* @av: char pointer to pointer
*
* Return: pointer to new string else return NULL
*/

char *argstostr(int ac, char **av)
{

if (ac == 0 || av == NULL)
return (NULL);

return (*av);
}

