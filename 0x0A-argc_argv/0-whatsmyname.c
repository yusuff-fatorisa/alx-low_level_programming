#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments
 * @argv: an array that stores the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
