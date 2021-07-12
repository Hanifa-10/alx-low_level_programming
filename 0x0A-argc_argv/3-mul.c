#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: result of the multiplication followeb by '\n'
*/

int main(int argc, char *argv[])
{
int m = 0;
if (argc == 3)
{
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);

return (0);
}
if (argc != 3)
{
printf("Error\n");
}
return (1);
}

