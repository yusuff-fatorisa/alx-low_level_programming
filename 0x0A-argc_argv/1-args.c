#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array that contains all the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
