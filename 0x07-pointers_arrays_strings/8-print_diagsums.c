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

	i = 0;

	while (i < size)
	{
		sum += *(a + i * size + i);
		sum1 += *(a + i * size + size - i - 1);
		i++;
	}

	print("%d, %d\n", sum, sum1);
}
