#include "holberton.h"
#include <stdio.h>


/**
* main - prints the number of arguments passed to the program
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);

return (0);
}

