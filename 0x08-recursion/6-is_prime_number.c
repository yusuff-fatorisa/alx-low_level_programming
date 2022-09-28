#include "main.h"

/**
 * divisors - number is prime?
 *
 * @n: integer params 1
 * @m: integer params 2
 *
 * Return: a boolean value
 */

int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - checks if an integer is a prime number
 * and returns an output
 *
 * @n: the input integer parameter
 *
 * Return: 1 if it's true, otherwise returns 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	return (divisors(3, n));
}
