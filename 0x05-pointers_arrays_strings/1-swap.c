#include "holberton.h"

/**
* swap_int -swap values of two integer
* @a: pointer integer
* @b: pointer integer
*/

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

