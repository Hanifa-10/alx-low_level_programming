#include "holberton.h"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 D arry of integers on success
 * and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

