#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds psitive numbers and prints the result
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always success, 1 for error
 */

int main(int argc, char *argv[])
{
int i, j, result = 0;

if (argc > 1)
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
if (argv[i][j] < '0' || argv[i][j] > '9')
printf("Error\n");
return (1);
result += atoi(argv[i]);
}
printf("%i\n", result);
return (0);
}

