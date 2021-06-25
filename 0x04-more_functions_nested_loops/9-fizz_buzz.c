#include "holberton.h"

/**
* main - print numbers from 1 to 100. Fizz multiple by 3. Buzz multiple by 5.
* FizzBuzz if both
* Return: Always 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");

else if (i % 3 == 0)
printf("Fizz");

else if (i % 5 == 0)
printf("Buzz");

else
printf("%u", i);

if (i < 100)
_putchar(' ');

else
_putchar('\n');
}
return (0);
}

