#include "holberton.h"
#include <stdio.h>

/**
* main - prints program name
* @argc: the number of arguments
* @argv: an array containin the program's arguments
* Return: 0 always for success
*/

int main(int argc, char*argv[])

{
printf("%s\n", argv[argc - 1]);

return (0);
}

