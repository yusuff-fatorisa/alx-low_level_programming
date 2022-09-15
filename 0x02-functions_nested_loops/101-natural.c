#include "main.h"

/**
 *main - computes and prints all the multiples
 *of 3 or 5 below 1024 (excluded)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int sum33, sum55, sum;
	int i;

	sum33 = 0;
	sum55 = 0;
	sum = 0;

	for ( = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum33 += i;
		} else if ((i % 5) == 0)
		{
			sum55 += i;
		}
	}

	sum = sum33 + sum55;
	printf("%lu\n", sum);
	return (0);
}
