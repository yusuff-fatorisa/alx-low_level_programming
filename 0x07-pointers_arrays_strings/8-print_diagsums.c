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

	int sum, sum1;

	m = 0;

	while (m < size)
	{
		sum += *(a + m * size + m);
		sum1 += *(a + m * size + size - m - 1);
		m++;
	}

	print("%d, %d\n", sum, sum1);
}
