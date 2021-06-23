#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");/* This causes the output to go into an infinite loop.*/

i = 0;

while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");

return (0);
}

