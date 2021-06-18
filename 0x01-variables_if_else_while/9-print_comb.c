#include <stdio>

/**
* main - prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
int numbers = 0;

while (numbers <= 9)
    {
putchar(numbers++ + '0');

if (numbers <= 8)
	{
putchar(',');
putchar(' ');
}
    }
putchar('\n');

return (0);
}
