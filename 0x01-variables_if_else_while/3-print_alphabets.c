#include <stdio.h>

/**
* main - print alphabet in lowercase and uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet, alphabetMAJ = 'A';

/* I was testing two different loops for my firsts loops in C */
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

while (alphabetMAJ <= 'Z')
putchar(alphabetMAJ++);

putchar('\n');

return (0);
}
