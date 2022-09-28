#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 *
 * @n: the integer to calculate its square root
 *
 * Return: the square roo t of integer n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1))
}

/**
 * _sqrt - helper function
 *
 * @n: integer parameter 1
 * @i: integer parameter 2
 *
 * Return: square root of a number
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
