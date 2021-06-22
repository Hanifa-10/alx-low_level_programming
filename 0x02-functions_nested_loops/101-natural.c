#include "holberton.h"
#include <stdio.h>

/**
* main - computes and prints the sum of all the multioles of 3 or 5 below 1024
* Return: Always 0
*/

int main(void)
{
int numbers = 0, sum = 0, limit = 1023;

while (numbers <= limit
{
if (numbers % 3 == 0 || numbers % 5 == 0)
			
sum += numbers;

numbers++;

}
printf("%i\n", sum);

return (0);
}

