#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: the square matrix of which to print the sum of its diagonal
 *
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1, sum;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[(size * i) + i];
		sum1 = sum1 + a[(size * (i + 1)) - (i + 1)];
	}

	print("%d, %d\n", sum, sum1);
}
