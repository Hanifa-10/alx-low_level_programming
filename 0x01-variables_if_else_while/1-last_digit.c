#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: 0 Always (Success)
*/

int main(void)
{
int n, v;

srand(time(0));
n = rand() - RAND_MAX / 2;

v = n % 10;

if (v > 5)
printf("Last digit of %d is %d ", n, v and is greater than 5\n");

else if (v == 0)
printf("Last digit of %d is %d and is 0\n", n v);

else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, v);

return (0)
}
