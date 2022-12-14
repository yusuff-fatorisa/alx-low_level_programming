#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: the square matrix of which to print the sum of its diagonal
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;

	int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, sum1);
}
