#include "main.h"

/**
 * factorial - finds the factorial of a number
 *
 * @n: the integer params
 *
 * Return: the factorial of the given number n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
