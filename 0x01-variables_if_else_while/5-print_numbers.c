#include <kstdio.h>

/**
* main - print all digits of base 10 starting 0
*
* Return: Always 0 (Success)
*/

int main(void)
{
char base = '0', nine ='9';

while (base <= nine)
putchar(base++);

putchar('\n');

return (0);
}
