#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer parameter to be printed
 */

void print_number(int n)
{
	int by10 = 1, res = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n > 1)
		{
			while (by10 < n)
			{
				by10 *= 10;
			}
			by10 /= 10;
		}

		while (n > 0)
		{
			res = (n / by10);
			_putchar(res + '0');
			n -= (res * by10);
			by10 /= 10;
		}
	}
}
